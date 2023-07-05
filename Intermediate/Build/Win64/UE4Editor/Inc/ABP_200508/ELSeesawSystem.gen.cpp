// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSeesawSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSeesawSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSeesawSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSeesawSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N();
	ABP_200508_API UClass* Z_Construct_UClass_AELCharacter_Native_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawStateType_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSeesawParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSeesawSystem::execCalSeesawValue_N)
	{
		P_GET_ENUM(ESeesawRelationType_N,Z_Param_RelationType);
		P_GET_UBOOL(Z_Param_bAddMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SrcValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalSeesawValue_N(ESeesawRelationType_N(Z_Param_RelationType),Z_Param_bAddMode,Z_Param_SrcValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSeesawSystem::execGetBuffType_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESeesawBuffType_N*)Z_Param__Result=P_THIS->GetBuffType_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSeesawSystem::execGetRelationType_N)
	{
		P_GET_OBJECT(AELCharacter_Native,Z_Param_TargetChar);
		P_GET_ENUM_REF(ESeesawRelationType_N,Z_Param_Out_SelfType);
		P_GET_ENUM_REF(ESeesawRelationType_N,Z_Param_Out_TargetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRelationType_N(Z_Param_TargetChar,(ESeesawRelationType_N&)(Z_Param_Out_SelfType),(ESeesawRelationType_N&)(Z_Param_Out_TargetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSeesawSystem::execGetStateType_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESeesawStateType_N*)Z_Param__Result=P_THIS->GetStateType_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSeesawSystem::execSetBuffType_N)
	{
		P_GET_ENUM(ESeesawBuffType_N,Z_Param_NewBuffType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuffType_N(ESeesawBuffType_N(Z_Param_NewBuffType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSeesawSystem::execSetStateType_N)
	{
		P_GET_ENUM(ESeesawRelationType_N,Z_Param_NewStateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateType_N(ESeesawRelationType_N(Z_Param_NewStateType));
		P_NATIVE_END;
	}
	void UELSeesawSystem::StaticRegisterNativesUELSeesawSystem()
	{
		UClass* Class = UELSeesawSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalSeesawValue_N", &UELSeesawSystem::execCalSeesawValue_N },
			{ "GetBuffType_N", &UELSeesawSystem::execGetBuffType_N },
			{ "GetRelationType_N", &UELSeesawSystem::execGetRelationType_N },
			{ "GetStateType_N", &UELSeesawSystem::execGetStateType_N },
			{ "SetBuffType_N", &UELSeesawSystem::execSetBuffType_N },
			{ "SetStateType_N", &UELSeesawSystem::execSetStateType_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics
	{
		struct ELSeesawSystem_eventCalSeesawValue_N_Parms
		{
			ESeesawRelationType_N RelationType;
			bool bAddMode;
			float SrcValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RelationType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RelationType;
		static void NewProp_bAddMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SrcValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_RelationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_RelationType = { "RelationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventCalSeesawValue_N_Parms, RelationType), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_bAddMode_SetBit(void* Obj)
	{
		((ELSeesawSystem_eventCalSeesawValue_N_Parms*)Obj)->bAddMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_bAddMode = { "bAddMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSeesawSystem_eventCalSeesawValue_N_Parms), &Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_bAddMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_SrcValue = { "SrcValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventCalSeesawValue_N_Parms, SrcValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventCalSeesawValue_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_RelationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_RelationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_bAddMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_SrcValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "CalSeesawValue_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventCalSeesawValue_N_Parms), Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics
	{
		struct ELSeesawSystem_eventGetBuffType_N_Parms
		{
			ESeesawBuffType_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventGetBuffType_N_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "GetBuffType_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventGetBuffType_N_Parms), Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics
	{
		struct ELSeesawSystem_eventGetRelationType_N_Parms
		{
			AELCharacter_Native* TargetChar;
			ESeesawRelationType_N SelfType;
			ESeesawRelationType_N TargetType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelfType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SelfType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventGetRelationType_N_Parms, TargetChar), Z_Construct_UClass_AELCharacter_Native_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_SelfType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_SelfType = { "SelfType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventGetRelationType_N_Parms, SelfType), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventGetRelationType_N_Parms, TargetType), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_SelfType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_SelfType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::NewProp_TargetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "GetRelationType_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventGetRelationType_N_Parms), Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics
	{
		struct ELSeesawSystem_eventGetStateType_N_Parms
		{
			ESeesawStateType_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventGetStateType_N_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESeesawStateType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "GetStateType_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventGetStateType_N_Parms), Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_GetStateType_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_GetStateType_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics
	{
		struct ELSeesawSystem_eventSetBuffType_N_Parms
		{
			ESeesawBuffType_N NewBuffType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewBuffType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewBuffType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::NewProp_NewBuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::NewProp_NewBuffType = { "NewBuffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventSetBuffType_N_Parms, NewBuffType), Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::NewProp_NewBuffType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::NewProp_NewBuffType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "SetBuffType_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventSetBuffType_N_Parms), Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics
	{
		struct ELSeesawSystem_eventSetStateType_N_Parms
		{
			ESeesawRelationType_N NewStateType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewStateType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewStateType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::NewProp_NewStateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::NewProp_NewStateType = { "NewStateType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSeesawSystem_eventSetStateType_N_Parms, NewStateType), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::NewProp_NewStateType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::NewProp_NewStateType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSeesawSystem, nullptr, "SetStateType_N", nullptr, nullptr, sizeof(ELSeesawSystem_eventSetStateType_N_Parms), Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSeesawSystem_SetStateType_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSeesawSystem_SetStateType_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSeesawSystem_NoRegister()
	{
		return UELSeesawSystem::StaticClass();
	}
	struct Z_Construct_UClass_UELSeesawSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeesawParam_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeesawParam_N;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StateType_N_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateType_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StateType_N;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BuffType_N_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffType_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BuffType_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuffActiveSec_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuffActiveSec_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPenaltyBuff_N_MetaData[];
#endif
		static void NewProp_bPenaltyBuff_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPenaltyBuff_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSeesawSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSeesawSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSeesawSystem_CalSeesawValue_N, "CalSeesawValue_N" }, // 3723153426
		{ &Z_Construct_UFunction_UELSeesawSystem_GetBuffType_N, "GetBuffType_N" }, // 637365815
		{ &Z_Construct_UFunction_UELSeesawSystem_GetRelationType_N, "GetRelationType_N" }, // 21942335
		{ &Z_Construct_UFunction_UELSeesawSystem_GetStateType_N, "GetStateType_N" }, // 376714563
		{ &Z_Construct_UFunction_UELSeesawSystem_SetBuffType_N, "SetBuffType_N" }, // 883528128
		{ &Z_Construct_UFunction_UELSeesawSystem_SetStateType_N, "SetStateType_N" }, // 2085650857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELSeesawSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_SeesawParam_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSeesawSystem" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_SeesawParam_N = { "SeesawParam_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSeesawSystem, SeesawParam_N), Z_Construct_UScriptStruct_FStSeesawParam, METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_SeesawParam_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_SeesawParam_N_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSeesawSystem" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N = { "StateType_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSeesawSystem, StateType_N), Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSeesawSystem" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N = { "BuffType_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSeesawSystem, BuffType_N), Z_Construct_UEnum_ABP_200508_ESeesawBuffType_N, METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffActiveSec_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSeesawSystem" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffActiveSec_N = { "BuffActiveSec_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSeesawSystem, BuffActiveSec_N), METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffActiveSec_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffActiveSec_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSeesawSystem" },
		{ "ModuleRelativePath", "Public/ELSeesawSystem.h" },
	};
#endif
	void Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N_SetBit(void* Obj)
	{
		((UELSeesawSystem*)Obj)->bPenaltyBuff_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N = { "bPenaltyBuff_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSeesawSystem), &Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSeesawSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_SeesawParam_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_StateType_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffType_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_BuffActiveSec_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSeesawSystem_Statics::NewProp_bPenaltyBuff_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSeesawSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSeesawSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSeesawSystem_Statics::ClassParams = {
		&UELSeesawSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSeesawSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELSeesawSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSeesawSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSeesawSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSeesawSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSeesawSystem, 2361726308);
	template<> ABP_200508_API UClass* StaticClass<UELSeesawSystem>()
	{
		return UELSeesawSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSeesawSystem(Z_Construct_UClass_UELSeesawSystem, &UELSeesawSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSeesawSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSeesawSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
