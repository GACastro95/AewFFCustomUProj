// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuCallbackBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuCallbackBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuCallbackBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuCallbackBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDBG_ReferBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase();
// End Cross Module References
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execBindClickUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindClickUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execBindResetUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindResetUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execBindSetupUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindSetupUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execBindUIValueChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindUIValueChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execCreateELDebugMenuCallbackInstance)
	{
		P_GET_OBJECT_REF(UELDebugMenuCallbackBase,Z_Param_Out_Instance);
		P_GET_PROPERTY(FStrProperty,Z_Param_BPPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELDebugMenuCallbackBase::CreateELDebugMenuCallbackInstance(Z_Param_Out_Instance,Z_Param_BPPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execGetWorldForBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetWorldForBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execInitialize)
	{
		P_GET_OBJECT(UGameInstance,Z_Param_GameInstance);
		P_GET_OBJECT(UELDebugMenuRootBase,Z_Param_IngameDebugMenu);
		P_GET_OBJECT(UELDebugMenuManager,Z_Param_DebugMenuManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize_Implementation(Z_Param_GameInstance,Z_Param_IngameDebugMenu,Z_Param_DebugMenuManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execReleaseCallbackInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseCallbackInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDebugMenuCallbackBase::execRequestExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestExit();
		P_NATIVE_END;
	}
	static FName NAME_UELDebugMenuCallbackBase_Initialize = FName(TEXT("Initialize"));
	void UELDebugMenuCallbackBase::Initialize(UGameInstance* GameInstance, UELDebugMenuRootBase* IngameDebugMenu, UELDebugMenuManager* DebugMenuManager)
	{
		ELDebugMenuCallbackBase_eventInitialize_Parms Parms;
		Parms.GameInstance=GameInstance;
		Parms.IngameDebugMenu=IngameDebugMenu;
		Parms.DebugMenuManager=DebugMenuManager;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_Initialize),&Parms);
	}
	static FName NAME_UELDebugMenuCallbackBase_OnClickUI = FName(TEXT("OnClickUI"));
	void UELDebugMenuCallbackBase::OnClickUI(FELDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		ELDebugMenuCallbackBase_eventOnClickUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_OnClickUI),&Parms);
	}
	static FName NAME_UELDebugMenuCallbackBase_OnResetUI = FName(TEXT("OnResetUI"));
	void UELDebugMenuCallbackBase::OnResetUI(FELDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		ELDebugMenuCallbackBase_eventOnResetUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_OnResetUI),&Parms);
	}
	static FName NAME_UELDebugMenuCallbackBase_OnSetupUI = FName(TEXT("OnSetupUI"));
	void UELDebugMenuCallbackBase::OnSetupUI(FELDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		ELDebugMenuCallbackBase_eventOnSetupUI_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_OnSetupUI),&Parms);
	}
	static FName NAME_UELDebugMenuCallbackBase_OnUIValueChanged = FName(TEXT("OnUIValueChanged"));
	void UELDebugMenuCallbackBase::OnUIValueChanged(FELDebugMenuSimpleUIParamBase const& UIParam, const FString& RegistKey)
	{
		ELDebugMenuCallbackBase_eventOnUIValueChanged_Parms Parms;
		Parms.UIParam=UIParam;
		Parms.RegistKey=RegistKey;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_OnUIValueChanged),&Parms);
	}
	static FName NAME_UELDebugMenuCallbackBase_SetDispDebug = FName(TEXT("SetDispDebug"));
	void UELDebugMenuCallbackBase::SetDispDebug(bool IsDisp)
	{
		ELDebugMenuCallbackBase_eventSetDispDebug_Parms Parms;
		Parms.IsDisp=IsDisp ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELDebugMenuCallbackBase_SetDispDebug),&Parms);
	}
	void UELDebugMenuCallbackBase::StaticRegisterNativesUELDebugMenuCallbackBase()
	{
		UClass* Class = UELDebugMenuCallbackBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindClickUI", &UELDebugMenuCallbackBase::execBindClickUI },
			{ "BindResetUI", &UELDebugMenuCallbackBase::execBindResetUI },
			{ "BindSetupUI", &UELDebugMenuCallbackBase::execBindSetupUI },
			{ "BindUIValueChanged", &UELDebugMenuCallbackBase::execBindUIValueChanged },
			{ "CreateELDebugMenuCallbackInstance", &UELDebugMenuCallbackBase::execCreateELDebugMenuCallbackInstance },
			{ "GetWorldForBP", &UELDebugMenuCallbackBase::execGetWorldForBP },
			{ "Initialize", &UELDebugMenuCallbackBase::execInitialize },
			{ "ReleaseCallbackInstance", &UELDebugMenuCallbackBase::execReleaseCallbackInstance },
			{ "RequestExit", &UELDebugMenuCallbackBase::execRequestExit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "BindClickUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "BindResetUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "BindSetupUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "BindUIValueChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics
	{
		struct ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms
		{
			UELDebugMenuCallbackBase* Instance;
			FString BPPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BPPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BPPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms, Instance), Z_Construct_UClass_UELDebugMenuCallbackBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_BPPath = { "BPPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms, BPPath), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_BPPath_MetaData)) };
	void Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms), &Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_BPPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "CreateELDebugMenuCallbackInstance", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventCreateELDebugMenuCallbackInstance_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics
	{
		struct ELDebugMenuCallbackBase_eventGetWorldForBP_Parms
		{
			UWorld* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventGetWorldForBP_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "GetWorldForBP", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventGetWorldForBP_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IngameDebugMenu;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugMenuManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventInitialize_Parms, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_IngameDebugMenu = { "IngameDebugMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventInitialize_Parms, IngameDebugMenu), Z_Construct_UClass_UELDebugMenuRootBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_DebugMenuManager = { "DebugMenuManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventInitialize_Parms, DebugMenuManager), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_IngameDebugMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::NewProp_DebugMenuManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "Initialize", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventInitialize_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnClickUI_Parms, UIParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnClickUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "OnClickUI", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventOnClickUI_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnResetUI_Parms, UIParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnResetUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "OnResetUI", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventOnResetUI_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnSetupUI_Parms, UIParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnSetupUI_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "OnSetupUI", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventOnSetupUI_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegistKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam = { "UIParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnUIValueChanged_Parms, UIParam), Z_Construct_UScriptStruct_FELDebugMenuSimpleUIParamBase, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey = { "RegistKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDebugMenuCallbackBase_eventOnUIValueChanged_Parms, RegistKey), METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_UIParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::NewProp_RegistKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "OnUIValueChanged", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventOnUIValueChanged_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "ReleaseCallbackInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "RequestExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics
	{
		static void NewProp_IsDisp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDisp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::NewProp_IsDisp_SetBit(void* Obj)
	{
		((ELDebugMenuCallbackBase_eventSetDispDebug_Parms*)Obj)->IsDisp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::NewProp_IsDisp = { "IsDisp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDebugMenuCallbackBase_eventSetDispDebug_Parms), &Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::NewProp_IsDisp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::NewProp_IsDisp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDebugMenuCallbackBase, nullptr, "SetDispDebug", nullptr, nullptr, sizeof(ELDebugMenuCallbackBase_eventSetDispDebug_Parms), Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDebugMenuCallbackBase_NoRegister()
	{
		return UELDebugMenuCallbackBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDebugMenuCallbackBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDBG_ReferBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_BindClickUI, "BindClickUI" }, // 3614343733
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_BindResetUI, "BindResetUI" }, // 3233994223
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_BindSetupUI, "BindSetupUI" }, // 1233718466
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_BindUIValueChanged, "BindUIValueChanged" }, // 147938034
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_CreateELDebugMenuCallbackInstance, "CreateELDebugMenuCallbackInstance" }, // 1185765442
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_GetWorldForBP, "GetWorldForBP" }, // 4215275055
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_Initialize, "Initialize" }, // 665791827
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_OnClickUI, "OnClickUI" }, // 3514845944
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_OnResetUI, "OnResetUI" }, // 4045220539
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_OnSetupUI, "OnSetupUI" }, // 2129939706
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_OnUIValueChanged, "OnUIValueChanged" }, // 3212701811
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_ReleaseCallbackInstance, "ReleaseCallbackInstance" }, // 75087663
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_RequestExit, "RequestExit" }, // 2038087392
		{ &Z_Construct_UFunction_UELDebugMenuCallbackBase_SetDispDebug, "SetDispDebug" }, // 2680486856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDebugMenuCallbackBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuCallbackBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDebugMenuCallbackBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::ClassParams = {
		&UELDebugMenuCallbackBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDebugMenuCallbackBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDebugMenuCallbackBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDebugMenuCallbackBase, 1098130073);
	template<> ABP_200508_API UClass* StaticClass<UELDebugMenuCallbackBase>()
	{
		return UELDebugMenuCallbackBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDebugMenuCallbackBase(Z_Construct_UClass_UELDebugMenuCallbackBase, &UELDebugMenuCallbackBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDebugMenuCallbackBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDebugMenuCallbackBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
