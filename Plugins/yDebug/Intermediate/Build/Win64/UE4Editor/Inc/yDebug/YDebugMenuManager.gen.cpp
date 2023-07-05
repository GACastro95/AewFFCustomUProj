// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDebugMenuManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuManager() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuManager_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuManager();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuRootBase_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYDebugMenuManager::execClearDebugMenuManagerGlobalInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::ClearDebugMenuManagerGlobalInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execCreateYDebugMenuManager)
	{
		P_GET_OBJECT_REF(UYDebugMenuManager,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::CreateYDebugMenuManager(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execCreateYDebugMenuRootBase)
	{
		P_GET_OBJECT_REF(UYDebugMenuRootBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateYDebugMenuRootBase(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execCreateYDebugSubMenu)
	{
		P_GET_OBJECT_REF(UYDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_OBJECT(UYDebugMenuRootBase,Z_Param__pcParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateYDebugSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey,Z_Param__pcParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execFindRoot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UYDebugMenuRootBase**)Z_Param__Result=P_THIS->FindRoot(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execGetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execGetDebugMenuManagerGlobalInstance)
	{
		P_GET_OBJECT_REF(UYDebugMenuManager,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::GetDebugMenuManagerGlobalInstance(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsEnableDebugCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::IsEnableDebugCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsEnableDebugMenuSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::IsEnableDebugMenuSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsEnableIngameDebugMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::IsEnableIngameDebugMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsEnableInputForImGui)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableInputForImGui();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsEnableMainMenuDebugMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::IsEnableMainMenuDebugMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsShowChildUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowChildUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execIsShowMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execLoadJsonForDebugMenuManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::LoadJsonForDebugMenuManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execRegistRoot)
	{
		P_GET_OBJECT(UYDebugMenuRootBase,Z_Param__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegistRoot(Z_Param__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execResetImGuiInputFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::ResetImGuiInputFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execResetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::ResetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execScreenShot)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrFilePath);
		P_GET_UBOOL(Z_Param_bShowGameUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ScreenShot(Z_Param_Out__rstrFilePath,Z_Param_bShowGameUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execSetDebugMenuManagerGlobalInstance)
	{
		P_GET_OBJECT(UYDebugMenuManager,Z_Param__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDebugMenuManager::SetDebugMenuManagerGlobalInstance(Z_Param__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execSetEnableInputForImGui)
	{
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnableInputForImGui(Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execSetPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param__pcPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerController(Z_Param__pcPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execSetShowMenu)
	{
		P_GET_UBOOL(Z_Param__bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowMenu(Z_Param__bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execSetup)
	{
		P_GET_OBJECT(UWorld,Z_Param__pcWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__pcWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDebugMenuManager::execUnregistRoot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregistRoot(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UYDebugMenuManager::StaticRegisterNativesUYDebugMenuManager()
	{
		UClass* Class = UYDebugMenuManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearDebugMenuManagerGlobalInstance", &UYDebugMenuManager::execClearDebugMenuManagerGlobalInstance },
			{ "CreateYDebugMenuManager", &UYDebugMenuManager::execCreateYDebugMenuManager },
			{ "CreateYDebugMenuRootBase", &UYDebugMenuManager::execCreateYDebugMenuRootBase },
			{ "CreateYDebugSubMenu", &UYDebugMenuManager::execCreateYDebugSubMenu },
			{ "FindRoot", &UYDebugMenuManager::execFindRoot },
			{ "GetController", &UYDebugMenuManager::execGetController },
			{ "GetDebugMenuManagerGlobalInstance", &UYDebugMenuManager::execGetDebugMenuManagerGlobalInstance },
			{ "IsEnableDebugCamera", &UYDebugMenuManager::execIsEnableDebugCamera },
			{ "IsEnableDebugMenuSystem", &UYDebugMenuManager::execIsEnableDebugMenuSystem },
			{ "IsEnableIngameDebugMenu", &UYDebugMenuManager::execIsEnableIngameDebugMenu },
			{ "IsEnableInputForImGui", &UYDebugMenuManager::execIsEnableInputForImGui },
			{ "IsEnableMainMenuDebugMenu", &UYDebugMenuManager::execIsEnableMainMenuDebugMenu },
			{ "IsShowChildUI", &UYDebugMenuManager::execIsShowChildUI },
			{ "IsShowMenu", &UYDebugMenuManager::execIsShowMenu },
			{ "LoadJsonForDebugMenuManager", &UYDebugMenuManager::execLoadJsonForDebugMenuManager },
			{ "RegistRoot", &UYDebugMenuManager::execRegistRoot },
			{ "ResetImGuiInputFlags", &UYDebugMenuManager::execResetImGuiInputFlags },
			{ "ResetWidget", &UYDebugMenuManager::execResetWidget },
			{ "ScreenShot", &UYDebugMenuManager::execScreenShot },
			{ "SetDebugMenuManagerGlobalInstance", &UYDebugMenuManager::execSetDebugMenuManagerGlobalInstance },
			{ "SetEnableInputForImGui", &UYDebugMenuManager::execSetEnableInputForImGui },
			{ "SetPlayerController", &UYDebugMenuManager::execSetPlayerController },
			{ "SetShowMenu", &UYDebugMenuManager::execSetShowMenu },
			{ "Setup", &UYDebugMenuManager::execSetup },
			{ "UnregistRoot", &UYDebugMenuManager::execUnregistRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics
	{
		struct YDebugMenuManager_eventClearDebugMenuManagerGlobalInstance_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventClearDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventClearDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "ClearDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(YDebugMenuManager_eventClearDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics
	{
		struct YDebugMenuManager_eventCreateYDebugMenuManager_Parms
		{
			UYDebugMenuManager* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugMenuManager_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventCreateYDebugMenuManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventCreateYDebugMenuManager_Parms), &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "CreateYDebugMenuManager", nullptr, nullptr, sizeof(YDebugMenuManager_eventCreateYDebugMenuManager_Parms), Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics
	{
		struct YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms
		{
			UYDebugMenuRootBase* _pcInst;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms), &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "CreateYDebugMenuRootBase", nullptr, nullptr, sizeof(YDebugMenuManager_eventCreateYDebugMenuRootBase_Parms), Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics
	{
		struct YDebugMenuManager_eventCreateYDebugSubMenu_Parms
		{
			UYDebugMenuSubMenuBase* _pcInst;
			FString _strRegistKey;
			UYDebugMenuRootBase* _pcParent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcParent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugSubMenu_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__pcParent = { "_pcParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventCreateYDebugSubMenu_Parms, _pcParent), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventCreateYDebugSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventCreateYDebugSubMenu_Parms), &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp__pcParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "CreateYDebugSubMenu", nullptr, nullptr, sizeof(YDebugMenuManager_eventCreateYDebugSubMenu_Parms), Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics
	{
		struct YDebugMenuManager_eventFindRoot_Parms
		{
			FString _strRegistKey;
			UYDebugMenuRootBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventFindRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventFindRoot_Parms, ReturnValue), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "FindRoot", nullptr, nullptr, sizeof(YDebugMenuManager_eventFindRoot_Parms), Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_FindRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_FindRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics
	{
		struct YDebugMenuManager_eventGetController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventGetController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "GetController", nullptr, nullptr, sizeof(YDebugMenuManager_eventGetController_Parms), Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics
	{
		struct YDebugMenuManager_eventGetDebugMenuManagerGlobalInstance_Parms
		{
			UYDebugMenuManager* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventGetDebugMenuManagerGlobalInstance_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventGetDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventGetDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "GetDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(YDebugMenuManager_eventGetDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics
	{
		struct YDebugMenuManager_eventIsEnableDebugCamera_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsEnableDebugCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsEnableDebugCamera_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsEnableDebugCamera", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsEnableDebugCamera_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics
	{
		struct YDebugMenuManager_eventIsEnableDebugMenuSystem_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsEnableDebugMenuSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsEnableDebugMenuSystem_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsEnableDebugMenuSystem", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsEnableDebugMenuSystem_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics
	{
		struct YDebugMenuManager_eventIsEnableIngameDebugMenu_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsEnableIngameDebugMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsEnableIngameDebugMenu_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsEnableIngameDebugMenu", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsEnableIngameDebugMenu_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics
	{
		struct YDebugMenuManager_eventIsEnableInputForImGui_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsEnableInputForImGui_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsEnableInputForImGui_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsEnableInputForImGui", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsEnableInputForImGui_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics
	{
		struct YDebugMenuManager_eventIsEnableMainMenuDebugMenu_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsEnableMainMenuDebugMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsEnableMainMenuDebugMenu_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsEnableMainMenuDebugMenu", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsEnableMainMenuDebugMenu_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics
	{
		struct YDebugMenuManager_eventIsShowChildUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsShowChildUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsShowChildUI_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsShowChildUI", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsShowChildUI_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics
	{
		struct YDebugMenuManager_eventIsShowMenu_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventIsShowMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventIsShowMenu_Parms), &Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "IsShowMenu", nullptr, nullptr, sizeof(YDebugMenuManager_eventIsShowMenu_Parms), Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics
	{
		struct YDebugMenuManager_eventLoadJsonForDebugMenuManager_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventLoadJsonForDebugMenuManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventLoadJsonForDebugMenuManager_Parms), &Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "LoadJsonForDebugMenuManager", nullptr, nullptr, sizeof(YDebugMenuManager_eventLoadJsonForDebugMenuManager_Parms), Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics
	{
		struct YDebugMenuManager_eventRegistRoot_Parms
		{
			UYDebugMenuRootBase* _pcInst;
			FString _strRegistKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventRegistRoot_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventRegistRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventRegistRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventRegistRoot_Parms), &Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "RegistRoot", nullptr, nullptr, sizeof(YDebugMenuManager_eventRegistRoot_Parms), Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_RegistRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_RegistRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics
	{
		struct YDebugMenuManager_eventResetImGuiInputFlags_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventResetImGuiInputFlags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventResetImGuiInputFlags_Parms), &Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "ResetImGuiInputFlags", nullptr, nullptr, sizeof(YDebugMenuManager_eventResetImGuiInputFlags_Parms), Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics
	{
		struct YDebugMenuManager_eventResetWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventResetWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventResetWidget_Parms), &Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "ResetWidget", nullptr, nullptr, sizeof(YDebugMenuManager_eventResetWidget_Parms), Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_ResetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_ResetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics
	{
		struct YDebugMenuManager_eventScreenShot_Parms
		{
			FString _rstrFilePath;
			bool bShowGameUI;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrFilePath;
		static void NewProp_bShowGameUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGameUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp__rstrFilePath = { "_rstrFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventScreenShot_Parms, _rstrFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventScreenShot_Parms*)Obj)->bShowGameUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI = { "bShowGameUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventScreenShot_Parms), &Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventScreenShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventScreenShot_Parms), &Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp__rstrFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "ScreenShot", nullptr, nullptr, sizeof(YDebugMenuManager_eventScreenShot_Parms), Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_ScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_ScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics
	{
		struct YDebugMenuManager_eventSetDebugMenuManagerGlobalInstance_Parms
		{
			UYDebugMenuManager* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventSetDebugMenuManagerGlobalInstance_Parms, _pcInst), Z_Construct_UClass_UYDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventSetDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventSetDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "SetDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(YDebugMenuManager_eventSetDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics
	{
		struct YDebugMenuManager_eventSetEnableInputForImGui_Parms
		{
			bool _bEnable;
			bool ReturnValue;
		};
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventSetEnableInputForImGui_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventSetEnableInputForImGui_Parms), &Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventSetEnableInputForImGui_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventSetEnableInputForImGui_Parms), &Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "SetEnableInputForImGui", nullptr, nullptr, sizeof(YDebugMenuManager_eventSetEnableInputForImGui_Parms), Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics
	{
		struct YDebugMenuManager_eventSetPlayerController_Parms
		{
			APlayerController* _pcPlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::NewProp__pcPlayerController = { "_pcPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventSetPlayerController_Parms, _pcPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::NewProp__pcPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "SetPlayerController", nullptr, nullptr, sizeof(YDebugMenuManager_eventSetPlayerController_Parms), Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics
	{
		struct YDebugMenuManager_eventSetShowMenu_Parms
		{
			bool _bShow;
		};
		static void NewProp__bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::NewProp__bShow_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventSetShowMenu_Parms*)Obj)->_bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::NewProp__bShow = { "_bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventSetShowMenu_Parms), &Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::NewProp__bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::NewProp__bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "SetShowMenu", nullptr, nullptr, sizeof(YDebugMenuManager_eventSetShowMenu_Parms), Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics
	{
		struct YDebugMenuManager_eventSetup_Parms
		{
			UWorld* _pcWorld;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcWorld;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp__pcWorld = { "_pcWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventSetup_Parms, _pcWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventSetup_Parms), &Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp__pcWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "Setup", nullptr, nullptr, sizeof(YDebugMenuManager_eventSetup_Parms), Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics
	{
		struct YDebugMenuManager_eventUnregistRoot_Parms
		{
			FString _strRegistKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegistKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDebugMenuManager_eventUnregistRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDebugMenuManager_eventUnregistRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDebugMenuManager_eventUnregistRoot_Parms), &Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDebugMenuManager, nullptr, "UnregistRoot", nullptr, nullptr, sizeof(YDebugMenuManager_eventUnregistRoot_Parms), Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDebugMenuManager_NoRegister()
	{
		return UYDebugMenuManager::StaticClass();
	}
	struct Z_Construct_UClass_UYDebugMenuManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cRootMenus_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cRootMenus_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cRootMenus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cRootMenus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cPadActiveMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_cPadActiveMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDebugMenuManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDebugMenuManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDebugMenuManager_ClearDebugMenuManagerGlobalInstance, "ClearDebugMenuManagerGlobalInstance" }, // 3551717845
		{ &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuManager, "CreateYDebugMenuManager" }, // 3210921833
		{ &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugMenuRootBase, "CreateYDebugMenuRootBase" }, // 902080802
		{ &Z_Construct_UFunction_UYDebugMenuManager_CreateYDebugSubMenu, "CreateYDebugSubMenu" }, // 1435887000
		{ &Z_Construct_UFunction_UYDebugMenuManager_FindRoot, "FindRoot" }, // 3667196436
		{ &Z_Construct_UFunction_UYDebugMenuManager_GetController, "GetController" }, // 2762759565
		{ &Z_Construct_UFunction_UYDebugMenuManager_GetDebugMenuManagerGlobalInstance, "GetDebugMenuManagerGlobalInstance" }, // 4001126496
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugCamera, "IsEnableDebugCamera" }, // 3995266964
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsEnableDebugMenuSystem, "IsEnableDebugMenuSystem" }, // 1144145696
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsEnableIngameDebugMenu, "IsEnableIngameDebugMenu" }, // 2591897458
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsEnableInputForImGui, "IsEnableInputForImGui" }, // 3993161526
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsEnableMainMenuDebugMenu, "IsEnableMainMenuDebugMenu" }, // 1643851275
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsShowChildUI, "IsShowChildUI" }, // 2712442540
		{ &Z_Construct_UFunction_UYDebugMenuManager_IsShowMenu, "IsShowMenu" }, // 2972181965
		{ &Z_Construct_UFunction_UYDebugMenuManager_LoadJsonForDebugMenuManager, "LoadJsonForDebugMenuManager" }, // 4171587446
		{ &Z_Construct_UFunction_UYDebugMenuManager_RegistRoot, "RegistRoot" }, // 2824743965
		{ &Z_Construct_UFunction_UYDebugMenuManager_ResetImGuiInputFlags, "ResetImGuiInputFlags" }, // 3510252641
		{ &Z_Construct_UFunction_UYDebugMenuManager_ResetWidget, "ResetWidget" }, // 1130394325
		{ &Z_Construct_UFunction_UYDebugMenuManager_ScreenShot, "ScreenShot" }, // 847486041
		{ &Z_Construct_UFunction_UYDebugMenuManager_SetDebugMenuManagerGlobalInstance, "SetDebugMenuManagerGlobalInstance" }, // 3145933135
		{ &Z_Construct_UFunction_UYDebugMenuManager_SetEnableInputForImGui, "SetEnableInputForImGui" }, // 1642521073
		{ &Z_Construct_UFunction_UYDebugMenuManager_SetPlayerController, "SetPlayerController" }, // 3494140
		{ &Z_Construct_UFunction_UYDebugMenuManager_SetShowMenu, "SetShowMenu" }, // 1235458653
		{ &Z_Construct_UFunction_UYDebugMenuManager_Setup, "Setup" }, // 3241319803
		{ &Z_Construct_UFunction_UYDebugMenuManager_UnregistRoot, "UnregistRoot" }, // 2387871136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDebugMenuManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_ValueProp = { "m_cRootMenus", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_Key_KeyProp = { "m_cRootMenus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuManager" },
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus = { "m_cRootMenus", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuManager, m_cRootMenus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_pcController_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuManager" },
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_pcController = { "m_pcController", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuManager, m_pcController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_pcController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_pcController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cPadActiveMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuManager" },
		{ "ModuleRelativePath", "Public/YDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cPadActiveMenu = { "m_cPadActiveMenu", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDebugMenuManager, m_cPadActiveMenu), Z_Construct_UClass_UYDebugMenuRootBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cPadActiveMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cPadActiveMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDebugMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cRootMenus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_pcController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDebugMenuManager_Statics::NewProp_m_cPadActiveMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDebugMenuManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDebugMenuManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDebugMenuManager_Statics::ClassParams = {
		&UYDebugMenuManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDebugMenuManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDebugMenuManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDebugMenuManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDebugMenuManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDebugMenuManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDebugMenuManager, 1949529581);
	template<> YDEBUG_API UClass* StaticClass<UYDebugMenuManager>()
	{
		return UYDebugMenuManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDebugMenuManager(Z_Construct_UClass_UYDebugMenuManager, &UYDebugMenuManager::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDebugMenuManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDebugMenuManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
