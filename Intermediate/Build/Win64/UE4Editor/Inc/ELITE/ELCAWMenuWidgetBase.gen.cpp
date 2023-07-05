// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCAWMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAWMenuWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCAWMenuWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCAWMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ABP_200508_API UClass* Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execGetBlockLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBlockLock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execIsActiveController)
	{
		P_GET_OBJECT(AELGameCommonPlayerControllerBase,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveController(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execIsDisplayUnitUS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisplayUnitUS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execIsLockedBlockAllInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLockedBlockAllInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execLockBlockAllInput)
	{
		P_GET_UBOOL(Z_Param_bBlockAllInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockBlockAllInput(Z_Param_bBlockAllInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execSetBlockAllInput)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockAllInput(Z_Param_Out_bSuccess,Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execSetBlockLock)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlockLock(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCAWMenuWidgetBase::execUnlockBlockAllInput)
	{
		P_GET_UBOOL(Z_Param_bBlockAllInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockBlockAllInput(Z_Param_bBlockAllInput);
		P_NATIVE_END;
	}
	static FName NAME_UELCAWMenuWidgetBase_OnInputStickLDirectionX = FName(TEXT("OnInputStickLDirectionX"));
	void UELCAWMenuWidgetBase::OnInputStickLDirectionX(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELCAWMenuWidgetBase_eventOnInputStickLDirectionX_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELCAWMenuWidgetBase_OnInputStickLDirectionX),&Parms);
	}
	static FName NAME_UELCAWMenuWidgetBase_OnInputStickLDirectionY = FName(TEXT("OnInputStickLDirectionY"));
	void UELCAWMenuWidgetBase::OnInputStickLDirectionY(AELGameCommonPlayerControllerBase* Controller, float Amount)
	{
		ELCAWMenuWidgetBase_eventOnInputStickLDirectionY_Parms Parms;
		Parms.Controller=Controller;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELCAWMenuWidgetBase_OnInputStickLDirectionY),&Parms);
	}
	static FName NAME_UELCAWMenuWidgetBase_OnInputZoomLevel = FName(TEXT("OnInputZoomLevel"));
	void UELCAWMenuWidgetBase::OnInputZoomLevel(float Amount)
	{
		ELCAWMenuWidgetBase_eventOnInputZoomLevel_Parms Parms;
		Parms.Amount=Amount;
		ProcessEvent(FindFunctionChecked(NAME_UELCAWMenuWidgetBase_OnInputZoomLevel),&Parms);
	}
	void UELCAWMenuWidgetBase::StaticRegisterNativesUELCAWMenuWidgetBase()
	{
		UClass* Class = UELCAWMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlockLock", &UELCAWMenuWidgetBase::execGetBlockLock },
			{ "IsActiveController", &UELCAWMenuWidgetBase::execIsActiveController },
			{ "IsDisplayUnitUS", &UELCAWMenuWidgetBase::execIsDisplayUnitUS },
			{ "IsLockedBlockAllInput", &UELCAWMenuWidgetBase::execIsLockedBlockAllInput },
			{ "LockBlockAllInput", &UELCAWMenuWidgetBase::execLockBlockAllInput },
			{ "SetBlockAllInput", &UELCAWMenuWidgetBase::execSetBlockAllInput },
			{ "SetBlockLock", &UELCAWMenuWidgetBase::execSetBlockLock },
			{ "UnlockBlockAllInput", &UELCAWMenuWidgetBase::execUnlockBlockAllInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics
	{
		struct ELCAWMenuWidgetBase_eventGetBlockLock_Parms
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
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventGetBlockLock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventGetBlockLock_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "GetBlockLock", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventGetBlockLock_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics
	{
		struct ELCAWMenuWidgetBase_eventIsActiveController_Parms
		{
			const AELGameCommonPlayerControllerBase* Controller;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_Controller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventIsActiveController_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_Controller_MetaData)) };
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventIsActiveController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventIsActiveController_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "IsActiveController", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventIsActiveController_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics
	{
		struct ELCAWMenuWidgetBase_eventIsDisplayUnitUS_Parms
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
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventIsDisplayUnitUS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventIsDisplayUnitUS_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "IsDisplayUnitUS", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventIsDisplayUnitUS_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics
	{
		struct ELCAWMenuWidgetBase_eventIsLockedBlockAllInput_Parms
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
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventIsLockedBlockAllInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventIsLockedBlockAllInput_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "IsLockedBlockAllInput", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventIsLockedBlockAllInput_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics
	{
		struct ELCAWMenuWidgetBase_eventLockBlockAllInput_Parms
		{
			bool bBlockAllInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockAllInput_MetaData[];
#endif
		static void NewProp_bBlockAllInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockAllInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventLockBlockAllInput_Parms*)Obj)->bBlockAllInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput = { "bBlockAllInput", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventLockBlockAllInput_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::NewProp_bBlockAllInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "LockBlockAllInput", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventLockBlockAllInput_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventOnInputStickLDirectionX_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventOnInputStickLDirectionX_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "OnInputStickLDirectionX", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventOnInputStickLDirectionX_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventOnInputStickLDirectionY_Parms, Controller), Z_Construct_UClass_AELGameCommonPlayerControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventOnInputStickLDirectionY_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "OnInputStickLDirectionY", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventOnInputStickLDirectionY_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCAWMenuWidgetBase_eventOnInputZoomLevel_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "OnInputZoomLevel", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventOnInputZoomLevel_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics
	{
		struct ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms
		{
			bool bSuccess;
			bool bNewValue;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "SetBlockAllInput", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventSetBlockAllInput_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics
	{
		struct ELCAWMenuWidgetBase_eventSetBlockLock_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventSetBlockLock_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventSetBlockLock_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "SetBlockLock", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventSetBlockLock_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics
	{
		struct ELCAWMenuWidgetBase_eventUnlockBlockAllInput_Parms
		{
			bool bBlockAllInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockAllInput_MetaData[];
#endif
		static void NewProp_bBlockAllInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockAllInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput_SetBit(void* Obj)
	{
		((ELCAWMenuWidgetBase_eventUnlockBlockAllInput_Parms*)Obj)->bBlockAllInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput = { "bBlockAllInput", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCAWMenuWidgetBase_eventUnlockBlockAllInput_Parms), &Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::NewProp_bBlockAllInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCAWMenuWidgetBase, nullptr, "UnlockBlockAllInput", nullptr, nullptr, sizeof(ELCAWMenuWidgetBase_eventUnlockBlockAllInput_Parms), Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCAWMenuWidgetBase_NoRegister()
	{
		return UELCAWMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCAWMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerAccSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerAccSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_GetBlockLock, "GetBlockLock" }, // 3288472625
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsActiveController, "IsActiveController" }, // 2124548662
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsDisplayUnitUS, "IsDisplayUnitUS" }, // 1674697695
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_IsLockedBlockAllInput, "IsLockedBlockAllInput" }, // 1612842707
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_LockBlockAllInput, "LockBlockAllInput" }, // 1576781264
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionX, "OnInputStickLDirectionX" }, // 3038526274
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputStickLDirectionY, "OnInputStickLDirectionY" }, // 4246165418
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_OnInputZoomLevel, "OnInputZoomLevel" }, // 1527535679
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockAllInput, "SetBlockAllInput" }, // 267390112
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_SetBlockLock, "SetBlockLock" }, // 963594314
		{ &Z_Construct_UFunction_UELCAWMenuWidgetBase_UnlockBlockAllInput, "UnlockBlockAllInput" }, // 2569402554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCAWMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAWMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAWMenuWidgetBase, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerAccSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAWMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerAccSpeed = { "TriggerAccSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAWMenuWidgetBase, TriggerAccSpeed), METADATA_PARAMS(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerAccSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerAccSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCAWMenuWidgetBase" },
		{ "ModuleRelativePath", "Public/ELCAWMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerCurve = { "TriggerCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCAWMenuWidgetBase, TriggerCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_ZoomSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerAccSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::NewProp_TriggerCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCAWMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::ClassParams = {
		&UELCAWMenuWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCAWMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCAWMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCAWMenuWidgetBase, 3649786019);
	template<> ELITE_API UClass* StaticClass<UELCAWMenuWidgetBase>()
	{
		return UELCAWMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCAWMenuWidgetBase(Z_Construct_UClass_UELCAWMenuWidgetBase, &UELCAWMenuWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCAWMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCAWMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
