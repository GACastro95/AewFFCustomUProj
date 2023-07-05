// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetActor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetActor::execHasELNetAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetActor::execHasELNetExecAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetExecAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetActor::execIsInELNetModeBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInELNetModeBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetActor::execSetELNetAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetActor::execSetELNetModeBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetModeBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetActor::execSetELNetTemporaryAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetELNetTemporaryAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void AELNetActor::StaticRegisterNativesAELNetActor()
	{
		UClass* Class = AELNetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasELNetAuthorityBP", &AELNetActor::execHasELNetAuthorityBP },
			{ "HasELNetExecAuthorityBP", &AELNetActor::execHasELNetExecAuthorityBP },
			{ "IsInELNetModeBP", &AELNetActor::execIsInELNetModeBP },
			{ "SetELNetAuthorityBP", &AELNetActor::execSetELNetAuthorityBP },
			{ "SetELNetModeBP", &AELNetActor::execSetELNetModeBP },
			{ "SetELNetTemporaryAuthorityBP", &AELNetActor::execSetELNetTemporaryAuthorityBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics
	{
		struct ELNetActor_eventHasELNetAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetActor_eventHasELNetAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventHasELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "HasELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetActor_eventHasELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics
	{
		struct ELNetActor_eventHasELNetExecAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetActor_eventHasELNetExecAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventHasELNetExecAuthorityBP_Parms), &Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "HasELNetExecAuthorityBP", nullptr, nullptr, sizeof(ELNetActor_eventHasELNetExecAuthorityBP_Parms), Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics
	{
		struct ELNetActor_eventIsInELNetModeBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetActor_eventIsInELNetModeBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventIsInELNetModeBP_Parms), &Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "IsInELNetModeBP", nullptr, nullptr, sizeof(ELNetActor_eventIsInELNetModeBP_Parms), Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_IsInELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_IsInELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics
	{
		struct ELNetActor_eventSetELNetAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetActor_eventSetELNetAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventSetELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "SetELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetActor_eventSetELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics
	{
		struct ELNetActor_eventSetELNetModeBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetActor_eventSetELNetModeBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventSetELNetModeBP_Parms), &Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "SetELNetModeBP", nullptr, nullptr, sizeof(ELNetActor_eventSetELNetModeBP_Parms), Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_SetELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_SetELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics
	{
		struct ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetActor, nullptr, "SetELNetTemporaryAuthorityBP", nullptr, nullptr, sizeof(ELNetActor_eventSetELNetTemporaryAuthorityBP_Parms), Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetActor_NoRegister()
	{
		return AELNetActor::StaticClass();
	}
	struct Z_Construct_UClass_AELNetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_AELNetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetActor_HasELNetAuthorityBP, "HasELNetAuthorityBP" }, // 3470656226
		{ &Z_Construct_UFunction_AELNetActor_HasELNetExecAuthorityBP, "HasELNetExecAuthorityBP" }, // 903140252
		{ &Z_Construct_UFunction_AELNetActor_IsInELNetModeBP, "IsInELNetModeBP" }, // 3499942180
		{ &Z_Construct_UFunction_AELNetActor_SetELNetAuthorityBP, "SetELNetAuthorityBP" }, // 2975650397
		{ &Z_Construct_UFunction_AELNetActor_SetELNetModeBP, "SetELNetModeBP" }, // 2348169561
		{ &Z_Construct_UFunction_AELNetActor_SetELNetTemporaryAuthorityBP, "SetELNetTemporaryAuthorityBP" }, // 2255542557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetActor" },
		{ "ModuleRelativePath", "Public/ELNetActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole = { "ELNetRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetActor, ELNetRole), Z_Construct_UEnum_ABP_200508_EELNetRole, METADATA_PARAMS(Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetActor_Statics::NewProp_ELNetRole,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELNetActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELNetObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELNetActor, IELNetObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetActor_Statics::ClassParams = {
		&AELNetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetActor, 206338316);
	template<> ABP_200508_API UClass* StaticClass<AELNetActor>()
	{
		return AELNetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetActor(Z_Construct_UClass_AELNetActor, &AELNetActor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
