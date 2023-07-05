// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillSrcParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillSrcParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillSrcParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillSrcParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillSrcParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillSrcParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillSrcParam"), sizeof(FStPassiveSkillSrcParam), Get_Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillSrcParam>()
{
	return FStPassiveSkillSrcParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillSrcParam(FStPassiveSkillSrcParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillSrcParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillSrcParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillSrcParam()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillSrcParam>(FName(TEXT("StPassiveSkillSrcParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillSrcParam;
	struct Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidTarget_MetaData[];
#endif
		static void NewProp_ValidTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ValidTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfHPPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfHPPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetHPPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetHPPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfMomentumPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfMomentumPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMomentumPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetMomentumPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfSpecialState_MetaData[];
#endif
		static void NewProp_SelfSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelfSpecialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSpecialState_MetaData[];
#endif
		static void NewProp_TargetSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TargetSpecialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfBloodStainState_MetaData[];
#endif
		static void NewProp_SelfBloodStainState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SelfBloodStainState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillSrcParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget_SetBit(void* Obj)
	{
		((FStPassiveSkillSrcParam*)Obj)->ValidTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget = { "ValidTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillSrcParam), &Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfHPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfHPPercent = { "SelfHPPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillSrcParam, SelfHPPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfHPPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfHPPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetHPPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetHPPercent = { "TargetHPPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillSrcParam, TargetHPPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetHPPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetHPPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfMomentumPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfMomentumPercent = { "SelfMomentumPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillSrcParam, SelfMomentumPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfMomentumPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfMomentumPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetMomentumPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetMomentumPercent = { "TargetMomentumPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillSrcParam, TargetMomentumPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetMomentumPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetMomentumPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState_SetBit(void* Obj)
	{
		((FStPassiveSkillSrcParam*)Obj)->SelfSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState = { "SelfSpecialState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillSrcParam), &Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState_SetBit(void* Obj)
	{
		((FStPassiveSkillSrcParam*)Obj)->TargetSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState = { "TargetSpecialState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillSrcParam), &Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillSrcParam" },
		{ "ModuleRelativePath", "Public/StPassiveSkillSrcParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState_SetBit(void* Obj)
	{
		((FStPassiveSkillSrcParam*)Obj)->SelfBloodStainState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState = { "SelfBloodStainState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillSrcParam), &Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_ValidTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfHPPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetHPPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfMomentumPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetMomentumPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfSpecialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_TargetSpecialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::NewProp_SelfBloodStainState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillSrcParam",
		sizeof(FStPassiveSkillSrcParam),
		alignof(FStPassiveSkillSrcParam),
		Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillSrcParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillSrcParam"), sizeof(FStPassiveSkillSrcParam), Get_Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillSrcParam_Hash() { return 4290823783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
