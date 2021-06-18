#define _WINSOCKAPI_

#include <Windows.h>
#include "tools/DirtyLogger.h"
#include "BDSMod.h"
#include "TrapdoorMod.h"
#include "lib/Remotery.h"

/*
 * 设置所有输出为utf8,设置支持彩色输出
 */
void initConsole() {
    system("chcp 65001");
    //enable colorful output
    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode;
    GetConsoleMode(hOutput, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING; //NOLINT
    SetConsoleMode(hOutput, dwMode);
}

void displayDisclaimerMessageBox() {
    auto boxID = MessageBox(
            nullptr,
            (LPCSTR) "If you click yes, this means you have agreed the disclaimer in the follow link:"
                     " https://github.com/hhhxiao/TrapDoor/blob/1.16.4/trapdoor-disclaimer.txt",
            (LPCSTR) "Trapdoor Disclaimer",
            MB_ICONINFORMATION | MB_YESNO
    );
    if (boxID == IDNO) {
        ExitProcess(0);
    }
}

trapdoor::BDSMod *createBDSModInstance() {
    return new mod::TrapdoorMod();
}


Remotery *rmt = nullptr;

//dll注入初始化
void mod_init() {
    rmt_CreateGlobalInstance(&rmt);
    //   displayDisclaimerMessageBox(); //免责声明窗口
    initConsole();
    trapdoor::initLogger("trapdoor.log"); //初始化日志
#ifdef  BETA
    trapdoor::setDevMode(true);
#endif
    mod::TrapdoorMod::printCopyRightInfo(); //打印日志
    auto *mod = createBDSModInstance();
    mod->getI18NManager().initialize();
    auto result = mod->asInstance<mod::TrapdoorMod>()->readConfigFile("trapdoor-config.json"); //读取配置文件
    if (!result) {
        L_ERROR("can not read configFile, trapdoor won't be injected");
        return;
    }
    trapdoor::initializeMod(mod);
}

void mod_exit() {
    rmt_DestroyGlobalInstance(rmt);
}

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved
) {
    switch (ul_reason_for_call) {  //NOLINT
        case DLL_PROCESS_ATTACH:
            mod_init();
            break;
        case DLL_THREAD_ATTACH: //NOLINT
            break;
        case DLL_THREAD_DETACH:
            break;
        case DLL_PROCESS_DETACH:
            mod_exit();
            break;
    }
    return TRUE;
}
