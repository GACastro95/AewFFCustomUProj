// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager();
	ABP_200508_API UClass* Z_Construct_UClass_UELDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugMenuManager::execClearELDebugMenuManagerGlobalInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::ClearELDebugMenuManagerGlobalInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execCreateELDebugMenuManager)
	{
		P_GET_OBJECT_REF(UELDebugMenuManager,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::CreateELDebugMenuManager(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execCreateELDebugMenuRootBase)
	{
		P_GET_OBJECT_REF(UELDebugMenuRootBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateELDebugMenuRootBase(Z_Param_Out__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execCreateELDebugSubMenu)
	{
		P_GET_OBJECT_REF(UELDebugMenuSubMenuBase,Z_Param_Out__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param__pcParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateELDebugSubMenu(Z_Param_Out__pcInst,Z_Param__strRegistKey,Z_Param__pcParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execELResetImGuiInputFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::ELResetImGuiInputFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execELResetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::ELResetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execFindRoot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELDebugMenuRootBase**)Z_Param__Result=P_THIS->FindRoot(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execGetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execGetELDebugMenuManagerGlobalInstance)
	{
		P_GET_OBJECT_REF(UELDebugMenuManager,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::GetELDebugMenuManagerGlobalInstance(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execGetWorldForBP)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldForBP(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsEnableELDebugCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::IsEnableELDebugCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsEnableELDebugMenuSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::IsEnableELDebugMenuSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsEnableIngameELDebugMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::IsEnableIngameELDebugMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsEnableInputForImGui)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableInputForImGui();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsShowChildUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowChildUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execIsShowMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShowMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execLoadJsonForELDebugMenuManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::LoadJsonForELDebugMenuManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execRegistRoot)
	{
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param__pcInst);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegistRoot(Z_Param__pcInst,Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execScreenShot)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrFilePath);
		P_GET_UBOOL(Z_Param_bShowGameUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ScreenShot(Z_Param_Out__rstrFilePath,Z_Param_bShowGameUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execSetELDebugMenuManagerGlobalInstance)
	{
		P_GET_OBJECT(UELDebugMenuManager,Z_Param__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuManager::SetELDebugMenuManagerGlobalInstance(Z_Param__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execSetEnableInputForImGui)
	{
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEnableInputForImGui(Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execSetPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param__pcPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerController(Z_Param__pcPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execSetShowMenu)
	{
		P_GET_UBOOL(Z_Param__bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowMenu(Z_Param__bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execSetup)
	{
		P_GET_OBJECT(UWorld,Z_Param__pcWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__pcWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuManager::execUnregistRoot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegistKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregistRoot(Z_Param__strRegistKey);
		P_NATIVE_END;
	}
	void UELDebugMenuManager::StaticRegisterNativesUELDebugMenuManager()
	{
		UClass* Class = UELDebugMenuManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearELDebugMenuManagerGlobalInstance", &UELDebugMenuManager::execClearELDebugMenuManagerGlobalInstance },
			{ "CreateELDebugMenuManager", &UELDebugMenuManager::execCreateELDebugMenuManager },
			{ "CreateELDebugMenuRootBase", &UELDebugMenuManager::execCreateELDebugMenuRootBase },
			{ "CreateELDebugSubMenu", &UELDebugMenuManager::execCreateELDebugSubMenu },
			{ "ELResetImGuiInputFlags", &UELDebugMenuManager::execELResetImGuiInputFlags },
			{ "ELResetWidget", &UELDebugMenuManager::execELResetWidget },
			{ "FindRoot", &UELDebugMenuManager::execFindRoot },
			{ "GetController", &UELDebugMenuManager::execGetController },
			{ "GetELDebugMenuManagerGlobalInstance", &UELDebugMenuManager::execGetELDebugMenuManagerGlobalInstance },
			{ "GetWorldForBP", &UELDebugMenuManager::execGetWorldForBP },
			{ "IsEnableELDebugCamera", &UELDebugMenuManager::execIsEnableELDebugCamera },
			{ "IsEnableELDebugMenuSystem", &UELDebugMenuManager::execIsEnableELDebugMenuSystem },
			{ "IsEnableIngameELDebugMenu", &UELDebugMenuManager::execIsEnableIngameELDebugMenu },
			{ "IsEnableInputForImGui", &UELDebugMenuManager::execIsEnableInputForImGui },
			{ "IsShowChildUI", &UELDebugMenuManager::execIsShowChildUI },
			{ "IsShowMenu", &UELDebugMenuManager::execIsShowMenu },
			{ "LoadJsonForELDebugMenuManager", &UELDebugMenuManager::execLoadJsonForELDebugMenuManager },
			{ "RegistRoot", &UELDebugMenuManager::execRegistRoot },
			{ "ScreenShot", &UELDebugMenuManager::execScreenShot },
			{ "SetELDebugMenuManagerGlobalInstance", &UELDebugMenuManager::execSetELDebugMenuManagerGlobalInstance },
			{ "SetEnableInputForImGui", &UELDebugMenuManager::execSetEnableInputForImGui },
			{ "SetPlayerController", &UELDebugMenuManager::execSetPlayerController },
			{ "SetShowMenu", &UELDebugMenuManager::execSetShowMenu },
			{ "Setup", &UELDebugMenuManager::execSetup },
			{ "UnregistRoot", &UELDebugMenuManager::execUnregistRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics
	{
		struct ELDebugMenuManager_eventClearELDebugMenuManagerGlobalInstance_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventClearELDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventClearELDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "ClearELDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(ELDebugMenuManager_eventClearELDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics
	{
		struct ELDebugMenuManager_eventCreateELDebugMenuManager_Parms
		{
			UELDebugMenuManager* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugMenuManager_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventCreateELDebugMenuManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventCreateELDebugMenuManager_Parms), &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "CreateELDebugMenuManager", nullptr, nullptr, sizeof(ELDebugMenuManager_eventCreateELDebugMenuManager_Parms), Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics
	{
		struct ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms
		{
			UELDebugMenuRootBase* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms), &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "CreateELDebugMenuRootBase", nullptr, nullptr, sizeof(ELDebugMenuManager_eventCreateELDebugMenuRootBase_Parms), Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics
	{
		struct ELDebugMenuManager_eventCreateELDebugSubMenu_Parms
		{
			UELDebugMenuSubMenuBase* _pcInst;
			FString _strRegistKey;
			UELDebugMenuRootBase* _pcParent;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugSubMenu_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuSubMenuBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugSubMenu_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__pcParent = { "_pcParent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventCreateELDebugSubMenu_Parms, _pcParent), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventCreateELDebugSubMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventCreateELDebugSubMenu_Parms), &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp__pcParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "CreateELDebugSubMenu", nullptr, nullptr, sizeof(ELDebugMenuManager_eventCreateELDebugSubMenu_Parms), Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics
	{
		struct ELDebugMenuManager_eventELResetImGuiInputFlags_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventELResetImGuiInputFlags_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventELResetImGuiInputFlags_Parms), &Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "ELResetImGuiInputFlags", nullptr, nullptr, sizeof(ELDebugMenuManager_eventELResetImGuiInputFlags_Parms), Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics
	{
		struct ELDebugMenuManager_eventELResetWidget_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventELResetWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventELResetWidget_Parms), &Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "ELResetWidget", nullptr, nullptr, sizeof(ELDebugMenuManager_eventELResetWidget_Parms), Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics
	{
		struct ELDebugMenuManager_eventFindRoot_Parms
		{
			FString _strRegistKey;
			UELDebugMenuRootBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventFindRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventFindRoot_Parms, ReturnValue), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "FindRoot", nullptr, nullptr, sizeof(ELDebugMenuManager_eventFindRoot_Parms), Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_FindRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_FindRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics
	{
		struct ELDebugMenuManager_eventGetController_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventGetController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "GetController", nullptr, nullptr, sizeof(ELDebugMenuManager_eventGetController_Parms), Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics
	{
		struct ELDebugMenuManager_eventGetELDebugMenuManagerGlobalInstance_Parms
		{
			UELDebugMenuManager* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventGetELDebugMenuManagerGlobalInstance_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventGetELDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventGetELDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "GetELDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(ELDebugMenuManager_eventGetELDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics
	{
		struct ELDebugMenuManager_eventGetWorldForBP_Parms
		{
			const UObject* WorldContextObject;
			UWorld* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventGetWorldForBP_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventGetWorldForBP_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "GetWorldForBP", nullptr, nullptr, sizeof(ELDebugMenuManager_eventGetWorldForBP_Parms), Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics
	{
		struct ELDebugMenuManager_eventIsEnableELDebugCamera_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsEnableELDebugCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsEnableELDebugCamera_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsEnableELDebugCamera", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsEnableELDebugCamera_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics
	{
		struct ELDebugMenuManager_eventIsEnableELDebugMenuSystem_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsEnableELDebugMenuSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsEnableELDebugMenuSystem_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsEnableELDebugMenuSystem", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsEnableELDebugMenuSystem_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics
	{
		struct ELDebugMenuManager_eventIsEnableIngameELDebugMenu_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsEnableIngameELDebugMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsEnableIngameELDebugMenu_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsEnableIngameELDebugMenu", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsEnableIngameELDebugMenu_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics
	{
		struct ELDebugMenuManager_eventIsEnableInputForImGui_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsEnableInputForImGui_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsEnableInputForImGui_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsEnableInputForImGui", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsEnableInputForImGui_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics
	{
		struct ELDebugMenuManager_eventIsShowChildUI_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsShowChildUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsShowChildUI_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsShowChildUI", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsShowChildUI_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics
	{
		struct ELDebugMenuManager_eventIsShowMenu_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventIsShowMenu_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventIsShowMenu_Parms), &Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "IsShowMenu", nullptr, nullptr, sizeof(ELDebugMenuManager_eventIsShowMenu_Parms), Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics
	{
		struct ELDebugMenuManager_eventLoadJsonForELDebugMenuManager_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventLoadJsonForELDebugMenuManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventLoadJsonForELDebugMenuManager_Parms), &Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "LoadJsonForELDebugMenuManager", nullptr, nullptr, sizeof(ELDebugMenuManager_eventLoadJsonForELDebugMenuManager_Parms), Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics
	{
		struct ELDebugMenuManager_eventRegistRoot_Parms
		{
			UELDebugMenuRootBase* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventRegistRoot_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventRegistRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventRegistRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventRegistRoot_Parms), &Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "RegistRoot", nullptr, nullptr, sizeof(ELDebugMenuManager_eventRegistRoot_Parms), Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_RegistRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_RegistRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics
	{
		struct ELDebugMenuManager_eventScreenShot_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp__rstrFilePath = { "_rstrFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventScreenShot_Parms, _rstrFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventScreenShot_Parms*)Obj)->bShowGameUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI = { "bShowGameUI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventScreenShot_Parms), &Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventScreenShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventScreenShot_Parms), &Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp__rstrFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_bShowGameUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "ScreenShot", nullptr, nullptr, sizeof(ELDebugMenuManager_eventScreenShot_Parms), Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_ScreenShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_ScreenShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics
	{
		struct ELDebugMenuManager_eventSetELDebugMenuManagerGlobalInstance_Parms
		{
			UELDebugMenuManager* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventSetELDebugMenuManagerGlobalInstance_Parms, _pcInst), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventSetELDebugMenuManagerGlobalInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventSetELDebugMenuManagerGlobalInstance_Parms), &Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "SetELDebugMenuManagerGlobalInstance", nullptr, nullptr, sizeof(ELDebugMenuManager_eventSetELDebugMenuManagerGlobalInstance_Parms), Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics
	{
		struct ELDebugMenuManager_eventSetEnableInputForImGui_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventSetEnableInputForImGui_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventSetEnableInputForImGui_Parms), &Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventSetEnableInputForImGui_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventSetEnableInputForImGui_Parms), &Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp__bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "SetEnableInputForImGui", nullptr, nullptr, sizeof(ELDebugMenuManager_eventSetEnableInputForImGui_Parms), Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics
	{
		struct ELDebugMenuManager_eventSetPlayerController_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::NewProp__pcPlayerController = { "_pcPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventSetPlayerController_Parms, _pcPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::NewProp__pcPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "SetPlayerController", nullptr, nullptr, sizeof(ELDebugMenuManager_eventSetPlayerController_Parms), Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics
	{
		struct ELDebugMenuManager_eventSetShowMenu_Parms
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
	void Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::NewProp__bShow_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventSetShowMenu_Parms*)Obj)->_bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::NewProp__bShow = { "_bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventSetShowMenu_Parms), &Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::NewProp__bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::NewProp__bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "SetShowMenu", nullptr, nullptr, sizeof(ELDebugMenuManager_eventSetShowMenu_Parms), Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics
	{
		struct ELDebugMenuManager_eventSetup_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp__pcWorld = { "_pcWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventSetup_Parms, _pcWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventSetup_Parms), &Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp__pcWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "Setup", nullptr, nullptr, sizeof(ELDebugMenuManager_eventSetup_Parms), Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics
	{
		struct ELDebugMenuManager_eventUnregistRoot_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey = { "_strRegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuManager_eventUnregistRoot_Parms, _strRegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuManager_eventUnregistRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuManager_eventUnregistRoot_Parms), &Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp__strRegistKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuManager, nullptr, "UnregistRoot", nullptr, nullptr, sizeof(ELDebugMenuManager_eventUnregistRoot_Parms), Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister()
	{
		return UELDebugMenuManager::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugMenuManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDebugMenuManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugMenuManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugMenuManager_ClearELDebugMenuManagerGlobalInstance, "ClearELDebugMenuManagerGlobalInstance" }, // 921618384
		{ &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuManager, "CreateELDebugMenuManager" }, // 1075591250
		{ &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugMenuRootBase, "CreateELDebugMenuRootBase" }, // 2627541566
		{ &Z_Construct_UFunction_UELDebugMenuManager_CreateELDebugSubMenu, "CreateELDebugSubMenu" }, // 1818767015
		{ &Z_Construct_UFunction_UELDebugMenuManager_ELResetImGuiInputFlags, "ELResetImGuiInputFlags" }, // 4130442099
		{ &Z_Construct_UFunction_UELDebugMenuManager_ELResetWidget, "ELResetWidget" }, // 800437161
		{ &Z_Construct_UFunction_UELDebugMenuManager_FindRoot, "FindRoot" }, // 3010592924
		{ &Z_Construct_UFunction_UELDebugMenuManager_GetController, "GetController" }, // 1336748230
		{ &Z_Construct_UFunction_UELDebugMenuManager_GetELDebugMenuManagerGlobalInstance, "GetELDebugMenuManagerGlobalInstance" }, // 2320020245
		{ &Z_Construct_UFunction_UELDebugMenuManager_GetWorldForBP, "GetWorldForBP" }, // 2466674246
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugCamera, "IsEnableELDebugCamera" }, // 2328001860
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsEnableELDebugMenuSystem, "IsEnableELDebugMenuSystem" }, // 126895389
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsEnableIngameELDebugMenu, "IsEnableIngameELDebugMenu" }, // 1737938932
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsEnableInputForImGui, "IsEnableInputForImGui" }, // 2624458528
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsShowChildUI, "IsShowChildUI" }, // 2087701302
		{ &Z_Construct_UFunction_UELDebugMenuManager_IsShowMenu, "IsShowMenu" }, // 140468947
		{ &Z_Construct_UFunction_UELDebugMenuManager_LoadJsonForELDebugMenuManager, "LoadJsonForELDebugMenuManager" }, // 4158315406
		{ &Z_Construct_UFunction_UELDebugMenuManager_RegistRoot, "RegistRoot" }, // 3301102541
		{ &Z_Construct_UFunction_UELDebugMenuManager_ScreenShot, "ScreenShot" }, // 3088095053
		{ &Z_Construct_UFunction_UELDebugMenuManager_SetELDebugMenuManagerGlobalInstance, "SetELDebugMenuManagerGlobalInstance" }, // 3947649151
		{ &Z_Construct_UFunction_UELDebugMenuManager_SetEnableInputForImGui, "SetEnableInputForImGui" }, // 2104405056
		{ &Z_Construct_UFunction_UELDebugMenuManager_SetPlayerController, "SetPlayerController" }, // 2614270908
		{ &Z_Construct_UFunction_UELDebugMenuManager_SetShowMenu, "SetShowMenu" }, // 2488339956
		{ &Z_Construct_UFunction_UELDebugMenuManager_Setup, "Setup" }, // 436897786
		{ &Z_Construct_UFunction_UELDebugMenuManager_UnregistRoot, "UnregistRoot" }, // 2844026617
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugMenuManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugMenuManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugMenuManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugMenuManager_Statics::ClassParams = {
		&UELDebugMenuManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugMenuManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugMenuManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugMenuManager, 1495271042);
	template<> ABP_200508_API UClass* StaticClass<UELDebugMenuManager>()
	{
		return UELDebugMenuManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugMenuManager(Z_Construct_UClass_UELDebugMenuManager, &UELDebugMenuManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugMenuManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugMenuManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
