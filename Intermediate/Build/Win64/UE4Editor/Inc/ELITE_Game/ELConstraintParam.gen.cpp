// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELConstraintParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELConstraintParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELConstraintParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerAP();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachCondition();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EAnimPlayType();
// End Cross Module References
class UScriptStruct* FELConstraintParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELConstraintParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELConstraintParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELConstraintParam"), sizeof(FELConstraintParam), Get_Z_Construct_UScriptStruct_FELConstraintParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELConstraintParam>()
{
	return FELConstraintParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELConstraintParam(FELConstraintParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELConstraintParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELConstraintParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELConstraintParam()
	{
		UScriptStruct::DeferCppStructOps<FELConstraintParam>(FName(TEXT("ELConstraintParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELConstraintParam;
	struct Z_Construct_UScriptStruct_FELConstraintParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetAP_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAP_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetAP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNodeName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReferenceAP_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceAP_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReferenceAP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceNodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReferenceNodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBlendRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBlendRate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InBlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutBlendTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELConstraintParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP = { "TargetAP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, TargetAP), Z_Construct_UEnum_ELITE_Game_EWrestlerAP, METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetNodeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetNodeName = { "TargetNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, TargetNodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetNodeName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP = { "ReferenceAP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, ReferenceAP), Z_Construct_UEnum_ELITE_Game_EWrestlerAP, METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceNodeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceNodeName = { "ReferenceNodeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, ReferenceNodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceNodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_AttachCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_AttachCondition = { "AttachCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, AttachCondition), Z_Construct_UScriptStruct_FELAttachCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_AttachCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_AttachCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_MaxBlendRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_MaxBlendRate = { "MaxBlendRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, MaxBlendRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_MaxBlendRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_MaxBlendRate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, BlendType), Z_Construct_UEnum_ELITE_Game_EAnimPlayType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_InBlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_InBlendTime = { "InBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, InBlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_InBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_InBlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_OutBlendTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELConstraintParam" },
		{ "ModuleRelativePath", "Public/ELConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_OutBlendTime = { "OutBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELConstraintParam, OutBlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_OutBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_OutBlendTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELConstraintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetAP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_TargetNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceAP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_ReferenceNodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_AttachCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_MaxBlendRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_InBlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELConstraintParam_Statics::NewProp_OutBlendTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELConstraintParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELConstraintParam",
		sizeof(FELConstraintParam),
		alignof(FELConstraintParam),
		Z_Construct_UScriptStruct_FELConstraintParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELConstraintParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELConstraintParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELConstraintParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELConstraintParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELConstraintParam"), sizeof(FELConstraintParam), Get_Z_Construct_UScriptStruct_FELConstraintParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELConstraintParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELConstraintParam_Hash() { return 585046549U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
