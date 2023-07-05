// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetPlayerController() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetPlayerController::execGetControllerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetControllerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execHasELNetAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execHasELNetExecAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetExecAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execIsInELNetModeBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInELNetModeBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execSetControllerID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerID(Z_Param_NewControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execSetELNetAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execSetELNetModeBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetModeBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPlayerController::execSetELNetTemporaryAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetELNetTemporaryAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void AELNetPlayerController::StaticRegisterNativesAELNetPlayerController()
	{
		UClass* Class = AELNetPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerId", &AELNetPlayerController::execGetControllerId },
			{ "HasELNetAuthorityBP", &AELNetPlayerController::execHasELNetAuthorityBP },
			{ "HasELNetExecAuthorityBP", &AELNetPlayerController::execHasELNetExecAuthorityBP },
			{ "IsInELNetModeBP", &AELNetPlayerController::execIsInELNetModeBP },
			{ "SetControllerID", &AELNetPlayerController::execSetControllerID },
			{ "SetELNetAuthorityBP", &AELNetPlayerController::execSetELNetAuthorityBP },
			{ "SetELNetModeBP", &AELNetPlayerController::execSetELNetModeBP },
			{ "SetELNetTemporaryAuthorityBP", &AELNetPlayerController::execSetELNetTemporaryAuthorityBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics
	{
		struct ELNetPlayerController_eventGetControllerId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetPlayerController_eventGetControllerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "GetControllerId", nullptr, nullptr, sizeof(ELNetPlayerController_eventGetControllerId_Parms), Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_GetControllerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_GetControllerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics
	{
		struct ELNetPlayerController_eventHasELNetAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventHasELNetAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventHasELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "HasELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventHasELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics
	{
		struct ELNetPlayerController_eventHasELNetExecAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventHasELNetExecAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventHasELNetExecAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "HasELNetExecAuthorityBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventHasELNetExecAuthorityBP_Parms), Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics
	{
		struct ELNetPlayerController_eventIsInELNetModeBP_Parms
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
	void Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventIsInELNetModeBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventIsInELNetModeBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "IsInELNetModeBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventIsInELNetModeBP_Parms), Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics
	{
		struct ELNetPlayerController_eventSetControllerID_Parms
		{
			int32 NewControllerID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewControllerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::NewProp_NewControllerID = { "NewControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetPlayerController_eventSetControllerID_Parms, NewControllerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::NewProp_NewControllerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "SetControllerID", nullptr, nullptr, sizeof(ELNetPlayerController_eventSetControllerID_Parms), Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_SetControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_SetControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics
	{
		struct ELNetPlayerController_eventSetELNetAuthorityBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventSetELNetAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventSetELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "SetELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventSetELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics
	{
		struct ELNetPlayerController_eventSetELNetModeBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventSetELNetModeBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventSetELNetModeBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "SetELNetModeBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventSetELNetModeBP_Parms), Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics
	{
		struct ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPlayerController, nullptr, "SetELNetTemporaryAuthorityBP", nullptr, nullptr, sizeof(ELNetPlayerController_eventSetELNetTemporaryAuthorityBP_Parms), Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetPlayerController_NoRegister()
	{
		return AELNetPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AELNetPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELControllerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ELControllerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELNetRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELNetRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELNetRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNetPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetPlayerController_GetControllerId, "GetControllerId" }, // 1350462088
		{ &Z_Construct_UFunction_AELNetPlayerController_HasELNetAuthorityBP, "HasELNetAuthorityBP" }, // 707636832
		{ &Z_Construct_UFunction_AELNetPlayerController_HasELNetExecAuthorityBP, "HasELNetExecAuthorityBP" }, // 2609142820
		{ &Z_Construct_UFunction_AELNetPlayerController_IsInELNetModeBP, "IsInELNetModeBP" }, // 2859097298
		{ &Z_Construct_UFunction_AELNetPlayerController_SetControllerID, "SetControllerID" }, // 3160610410
		{ &Z_Construct_UFunction_AELNetPlayerController_SetELNetAuthorityBP, "SetELNetAuthorityBP" }, // 2509689351
		{ &Z_Construct_UFunction_AELNetPlayerController_SetELNetModeBP, "SetELNetModeBP" }, // 2977020200
		{ &Z_Construct_UFunction_AELNetPlayerController_SetELNetTemporaryAuthorityBP, "SetELNetTemporaryAuthorityBP" }, // 2038121273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELNetPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELControllerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetPlayerController" },
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELControllerID = { "ELControllerID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetPlayerController, ELControllerID), METADATA_PARAMS(Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELControllerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetPlayerController" },
		{ "ModuleRelativePath", "Public/ELNetPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole = { "ELNetRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetPlayerController, ELNetRole), Z_Construct_UEnum_ABP_200508_EELNetRole, METADATA_PARAMS(Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetPlayerController_Statics::NewProp_ELNetRole,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELNetPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELNetObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELNetPlayerController, IELNetObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetPlayerController_Statics::ClassParams = {
		&AELNetPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetPlayerController, 597782384);
	template<> ABP_200508_API UClass* StaticClass<AELNetPlayerController>()
	{
		return AELNetPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetPlayerController(Z_Construct_UClass_AELNetPlayerController, &AELNetPlayerController::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
