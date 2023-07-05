// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillData_Situation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillData_Situation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Situation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillData_Situation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillData_Situation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillData_Situation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillData_Situation"), sizeof(FStPassiveSkillData_Situation), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillData_Situation>()
{
	return FStPassiveSkillData_Situation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillData_Situation(FStPassiveSkillData_Situation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillData_Situation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Situation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Situation()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillData_Situation>(FName(TEXT("StPassiveSkillData_Situation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Situation;
	struct Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fGameplaySec_Under_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fGameplaySec_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fGameplaySec_Over_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fGameplaySec_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSelfHP_Under_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSelfHP_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSelfHP_Over_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSelfHP_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTargetHP_Under_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTargetHP_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTargetHP_Over_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTargetHP_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiffHP_Over_MetaData[];
#endif
		static void NewProp_bDiffHP_Over_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiffHP_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiffHP_Under_MetaData[];
#endif
		static void NewProp_bDiffHP_Under_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiffHP_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlood_MetaData[];
#endif
		static void NewProp_bBlood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSelfMomentum_Over_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSelfMomentum_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSelfMomentum_Under_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSelfMomentum_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelfSpecialState_MetaData[];
#endif
		static void NewProp_bSelfSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfSpecialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTargetMomentum_Over_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTargetMomentum_Over;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTargetMomentum_Under_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTargetMomentum_Under;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetSpecialState_MetaData[];
#endif
		static void NewProp_bTargetSpecialState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetSpecialState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillData_Situation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Under = { "fGameplaySec_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fGameplaySec_Under), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Over = { "fGameplaySec_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fGameplaySec_Over), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Under = { "fSelfHP_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fSelfHP_Under), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Over = { "fSelfHP_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fSelfHP_Over), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Under = { "fTargetHP_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fTargetHP_Under), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Over = { "fTargetHP_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fTargetHP_Over), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over_SetBit(void* Obj)
	{
		((FStPassiveSkillData_Situation*)Obj)->bDiffHP_Over = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over = { "bDiffHP_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_Situation), &Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under_SetBit(void* Obj)
	{
		((FStPassiveSkillData_Situation*)Obj)->bDiffHP_Under = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under = { "bDiffHP_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_Situation), &Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood_SetBit(void* Obj)
	{
		((FStPassiveSkillData_Situation*)Obj)->bBlood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood = { "bBlood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_Situation), &Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Over = { "fSelfMomentum_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fSelfMomentum_Over), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Under = { "fSelfMomentum_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fSelfMomentum_Under), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState_SetBit(void* Obj)
	{
		((FStPassiveSkillData_Situation*)Obj)->bSelfSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState = { "bSelfSpecialState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_Situation), &Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Over_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Over = { "fTargetMomentum_Over", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fTargetMomentum_Over), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Over_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Over_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Under_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Under = { "fTargetMomentum_Under", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Situation, fTargetMomentum_Under), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Under_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Under_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Situation" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Situation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState_SetBit(void* Obj)
	{
		((FStPassiveSkillData_Situation*)Obj)->bTargetSpecialState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState = { "bTargetSpecialState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_Situation), &Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fGameplaySec_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfHP_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetHP_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bDiffHP_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bBlood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fSelfMomentum_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bSelfSpecialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Over,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_fTargetMomentum_Under,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::NewProp_bTargetSpecialState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillData_Situation",
		sizeof(FStPassiveSkillData_Situation),
		alignof(FStPassiveSkillData_Situation),
		Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Situation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillData_Situation"), sizeof(FStPassiveSkillData_Situation), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Situation_Hash() { return 1920222203U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
