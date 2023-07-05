// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTitleHolderHistory_BP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleHolderHistory_BP() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderHistory_BP();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FELTitleHolderHistory_BP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELTitleHolderHistory_BP"), sizeof(FELTitleHolderHistory_BP), Get_Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELTitleHolderHistory_BP>()
{
	return FELTitleHolderHistory_BP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELTitleHolderHistory_BP(FELTitleHolderHistory_BP::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELTitleHolderHistory_BP"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderHistory_BP
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderHistory_BP()
	{
		UScriptStruct::DeferCppStructOps<FELTitleHolderHistory_BP>(FName(TEXT("ELTitleHolderHistory_BP")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderHistory_BP;
	struct Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainWrestlerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainWrestlerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartnerWrestlerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartnerWrestlerInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquisitionDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcquisitionDateTime;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EditWrestlerNameList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditWrestlerNameList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditWrestlerNameList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELTitleHolderHistory_BP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_MainWrestlerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderHistory_BP" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_MainWrestlerInfo = { "MainWrestlerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderHistory_BP, MainWrestlerInfo), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_MainWrestlerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_MainWrestlerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_PartnerWrestlerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderHistory_BP" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_PartnerWrestlerInfo = { "PartnerWrestlerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderHistory_BP, PartnerWrestlerInfo), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_PartnerWrestlerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_PartnerWrestlerInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_AcquisitionDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderHistory_BP" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_AcquisitionDateTime = { "AcquisitionDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderHistory_BP, AcquisitionDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_AcquisitionDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_AcquisitionDateTime_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList_Inner = { "EditWrestlerNameList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderHistory_BP" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList = { "EditWrestlerNameList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderHistory_BP, EditWrestlerNameList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_TeamUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderHistory_BP" },
		{ "ModuleRelativePath", "Public/ELTitleHolderHistory_BP.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_TeamUID = { "TeamUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderHistory_BP, TeamUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_TeamUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_TeamUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_MainWrestlerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_PartnerWrestlerInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_AcquisitionDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_EditWrestlerNameList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::NewProp_TeamUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELTitleHolderHistory_BP",
		sizeof(FELTitleHolderHistory_BP),
		alignof(FELTitleHolderHistory_BP),
		Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderHistory_BP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELTitleHolderHistory_BP"), sizeof(FELTitleHolderHistory_BP), Get_Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderHistory_BP_Hash() { return 3763452731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
