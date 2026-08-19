// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

class MyModule : IModule
{
public:
    MyModule(TwinkTrackmania& TrackmaniaMgr)
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

IModule* MyModuleFactory(TwinkTrackmania* TrackmaniaMgr, ImGuiContext* Ctx)
{
    ImGui::SetCurrentContext(Ctx);
    return reinterpret_cast<IModule*>(new MyModule(*TrackmaniaMgr));
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

