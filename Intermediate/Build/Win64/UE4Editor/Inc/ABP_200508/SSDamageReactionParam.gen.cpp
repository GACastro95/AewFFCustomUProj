// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDamageReactionParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDamageReactionParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageReactionParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSReactionState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDamageReactionParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDamageReactionParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDamageReactionParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDamageReactionParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDamageReactionParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDamageReactionParam"), sizeof(FSSDamageReactionParam), Get_Z_Construct_UScriptStruct_FSSDamageReactionParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDamageReactionParam>()
{
	return FSSDamageReactionParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDamageReactionParam(FSSDamageReactionParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDamageReactionParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageReactionParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageReactionParam()
	{
		UScriptStruct::DeferCppStructOps<FSSDamageReactionParam>(FName(TEXT("SSDamageReactionParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageReactionParam;
	struct Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReactionMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FallingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallHitRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WallHitRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitSituationRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WaitSituationRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallOverRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WallOverRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoReplaceRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KoReplaceRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadReplaceRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DeadReplaceRowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDamageReactionParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_StateBP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_StateBP = { "StateBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, StateBP), Z_Construct_UClass_UELSSReactionState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_StateBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_StateBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_ReactionMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_ReactionMontage = { "ReactionMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, ReactionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_ReactionMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_ReactionMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_FallingMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_FallingMontage = { "FallingMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, FallingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_FallingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_FallingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_LandMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_LandMontage = { "LandMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, LandMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_LandMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_LandMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallHitRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallHitRowName = { "WallHitRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, WallHitRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallHitRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallHitRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WaitSituationRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WaitSituationRowName = { "WaitSituationRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, WaitSituationRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WaitSituationRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WaitSituationRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallOverRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallOverRowName = { "WallOverRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, WallOverRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallOverRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallOverRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_KoReplaceRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_KoReplaceRowName = { "KoReplaceRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, KoReplaceRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_KoReplaceRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_KoReplaceRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_DeadReplaceRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageReactionParam" },
		{ "ModuleRelativePath", "Public/SSDamageReactionParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_DeadReplaceRowName = { "DeadReplaceRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageReactionParam, DeadReplaceRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_DeadReplaceRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_DeadReplaceRowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_StateBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_ReactionMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_FallingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_LandMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallHitRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WaitSituationRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_WallOverRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_KoReplaceRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::NewProp_DeadReplaceRowName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDamageReactionParam",
		sizeof(FSSDamageReactionParam),
		alignof(FSSDamageReactionParam),
		Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDamageReactionParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDamageReactionParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDamageReactionParam"), sizeof(FSSDamageReactionParam), Get_Z_Construct_UScriptStruct_FSSDamageReactionParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDamageReactionParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDamageReactionParam_Hash() { return 3471233748U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
