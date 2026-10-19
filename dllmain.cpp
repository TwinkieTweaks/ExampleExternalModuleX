// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

class MyModule : public IModule
{
public:
    MyModule(TwinkTrackmania& TrackmaniaMgr, ILoggert& Loggert)
    {
        this->Twinkie = &TrackmaniaMgr;
        this->Name = "My module";
        this->ID = "MyModule";
    }

    virtual ~MyModule() {}

    virtual void Render() override 
    {
        ImGui::Begin("Hi!");

        ImGui::Text("$f00Funk$0f0y$f00.");

        ImGui::End();
    }
};

IModule* MyModuleFactory(TwinkTrackmania* TrackmaniaMgr, ILoggert* Loggert)
{
    return static_cast<IModule*>(new MyModule(*TrackmaniaMgr, *Loggert));
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        AddModuleToQueue(MyModuleFactory);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

