// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELAnimInstance_FootIK.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimInstance_FootIK() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_FootIK_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_FootIK();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELAnimInstance_IK();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FFootIKState();
// End Cross Module References
	DEFINE_FUNCTION(UELAnimInstance_FootIK::execGetCurrentHipsOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentHipsOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAnimInstance_FootIK::execUpdateHipsBlendRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_bEnable);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHipsBlendRatio(Z_Param_DeltaTime,Z_Param_bEnable,Z_Param_OverrideSpeed);
		P_NATIVE_END;
	}
	void UELAnimInstance_FootIK::StaticRegisterNativesUELAnimInstance_FootIK()
	{
		UClass* Class = UELAnimInstance_FootIK::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHipsOffset", &UELAnimInstance_FootIK::execGetCurrentHipsOffset },
			{ "UpdateHipsBlendRatio", &UELAnimInstance_FootIK::execUpdateHipsBlendRatio },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics
	{
		struct ELAnimInstance_FootIK_eventGetCurrentHipsOffset_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_FootIK_eventGetCurrentHipsOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_FootIK, nullptr, "GetCurrentHipsOffset", nullptr, nullptr, sizeof(ELAnimInstance_FootIK_eventGetCurrentHipsOffset_Parms), Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics
	{
		struct ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms
		{
			float DeltaTime;
			bool bEnable;
			float OverrideSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms), &Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_OverrideSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_OverrideSpeed = { "OverrideSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms, OverrideSpeed), METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_OverrideSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_OverrideSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::NewProp_OverrideSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAnimInstance_FootIK, nullptr, "UpdateHipsBlendRatio", nullptr, nullptr, sizeof(ELAnimInstance_FootIK_eventUpdateHipsBlendRatio_Parms), Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAnimInstance_FootIK_NoRegister()
	{
		return UELAnimInstance_FootIK::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimInstance_FootIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHipsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentHipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KneeLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KneeRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KneeRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHipsBlend_MetaData[];
#endif
		static void NewProp_bHipsBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHipsBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsBlendRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HipsBlendRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultHipsBlendSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultHipsBlendSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimInstance_FootIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimInstance_IK,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAnimInstance_FootIK_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAnimInstance_FootIK_GetCurrentHipsOffset, "GetCurrentHipsOffset" }, // 2039364404
		{ &Z_Construct_UFunction_UELAnimInstance_FootIK_UpdateHipsBlendRatio, "UpdateHipsBlendRatio" }, // 1259098798
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ELAnimInstance_FootIK.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_CurrentHipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_CurrentHipsOffset = { "CurrentHipsOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, CurrentHipsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_CurrentHipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_CurrentHipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsOffset = { "HipsOffset", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, HipsOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeLeft = { "KneeLeft", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, KneeLeft), Z_Construct_UScriptStruct_FFootIKState, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeRight = { "KneeRight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, KneeRight), Z_Construct_UScriptStruct_FFootIKState, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootLeft_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootLeft = { "FootLeft", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, FootLeft), Z_Construct_UScriptStruct_FFootIKState, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootRight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootRight = { "FootRight", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, FootRight), Z_Construct_UScriptStruct_FFootIKState, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend_SetBit(void* Obj)
	{
		((UELAnimInstance_FootIK*)Obj)->bHipsBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend = { "bHipsBlend", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimInstance_FootIK), &Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsBlendRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsBlendRatio = { "HipsBlendRatio", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, HipsBlendRatio), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsBlendRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsBlendRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_DefaultHipsBlendSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimInstance_FootIK" },
		{ "ModuleRelativePath", "Public/ELAnimInstance_FootIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_DefaultHipsBlendSpeed = { "DefaultHipsBlendSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimInstance_FootIK, DefaultHipsBlendSpeed), METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_DefaultHipsBlendSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_DefaultHipsBlendSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimInstance_FootIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_CurrentHipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_KneeRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_FootRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_bHipsBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_HipsBlendRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimInstance_FootIK_Statics::NewProp_DefaultHipsBlendSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimInstance_FootIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimInstance_FootIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimInstance_FootIK_Statics::ClassParams = {
		&UELAnimInstance_FootIK::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELAnimInstance_FootIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimInstance_FootIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimInstance_FootIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimInstance_FootIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimInstance_FootIK, 1267328011);
	template<> ELITE_GAME_API UClass* StaticClass<UELAnimInstance_FootIK>()
	{
		return UELAnimInstance_FootIK::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimInstance_FootIK(Z_Construct_UClass_UELAnimInstance_FootIK, &UELAnimInstance_FootIK::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UELAnimInstance_FootIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimInstance_FootIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
