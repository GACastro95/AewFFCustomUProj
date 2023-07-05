// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSFallParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSFallParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSFallParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSFallParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSFallParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSFallParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSFallParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSFallParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSFallParam"), sizeof(FSSFallParam), Get_Z_Construct_UScriptStruct_FSSFallParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSFallParam>()
{
	return FSSFallParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSFallParam(FSSFallParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSFallParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSFallParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSFallParam()
	{
		UScriptStruct::DeferCppStructOps<FSSFallParam>(FName(TEXT("SSFallParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSFallParam;
	struct Z_Construct_UScriptStruct_FSSFallParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LandingLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HeightDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunJumpLandState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RunJumpLandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleJumpLandState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DoubleJumpLandState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCoefOnFall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageCoefOnFall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCoefOnDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageCoefOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvolveProp_MetaData[];
#endif
		static void NewProp_InvolveProp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvolveProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraShake_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShake_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraShake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSFallParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSFallParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandingLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandingLevel = { "LandingLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, LandingLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandingLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_HeightDiff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_HeightDiff = { "HeightDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, HeightDiff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_HeightDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_HeightDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandState = { "LandState", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, LandState), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_RunJumpLandState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_RunJumpLandState = { "RunJumpLandState", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, RunJumpLandState), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_RunJumpLandState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_RunJumpLandState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DoubleJumpLandState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DoubleJumpLandState = { "DoubleJumpLandState", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, DoubleJumpLandState), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DoubleJumpLandState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DoubleJumpLandState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnFall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnFall = { "DamageCoefOnFall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, DamageCoefOnFall), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnFall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnFall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnDamage = { "DamageCoefOnDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, DamageCoefOnDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp_SetBit(void* Obj)
	{
		((FSSFallParam*)Obj)->InvolveProp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp = { "InvolveProp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSFallParam), &Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSFallParam" },
		{ "ModuleRelativePath", "Public/SSFallParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSFallParam, CameraShake), Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSFallParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandingLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_HeightDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_LandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_RunJumpLandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DoubleJumpLandState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnFall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_DamageCoefOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_InvolveProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSFallParam_Statics::NewProp_CameraShake,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSFallParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSFallParam",
		sizeof(FSSFallParam),
		alignof(FSSFallParam),
		Z_Construct_UScriptStruct_FSSFallParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSFallParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSFallParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSFallParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSFallParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSFallParam"), sizeof(FSSFallParam), Get_Z_Construct_UScriptStruct_FSSFallParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSFallParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSFallParam_Hash() { return 2455176114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
