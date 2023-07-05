// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELTitleHolderInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTitleHolderInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderHistory();
// End Cross Module References
class UScriptStruct* FELTitleHolderInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELTitleHolderInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELTitleHolderInfo"), sizeof(FELTitleHolderInfo), Get_Z_Construct_UScriptStruct_FELTitleHolderInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELTitleHolderInfo>()
{
	return FELTitleHolderInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELTitleHolderInfo(FELTitleHolderInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELTitleHolderInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderInfo()
	{
		UScriptStruct::DeferCppStructOps<FELTitleHolderInfo>(FName(TEXT("ELTitleHolderInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELTitleHolderInfo;
	struct Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Belt_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Belt_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Belt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Holder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Holder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HolderMember_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HolderMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefendCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefendCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquisitionDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AcquisitionDateTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_History_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_History_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_History;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELTitleHolderInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt = { "Belt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, Belt), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Holder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Holder = { "Holder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, Holder), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Holder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Holder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_HolderMember_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_HolderMember = { "HolderMember", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, HolderMember), Z_Construct_UScriptStruct_FELTitleHolder, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_HolderMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_HolderMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_DefendCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_DefendCount = { "DefendCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, DefendCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_DefendCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_DefendCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_TeamUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_TeamUID = { "TeamUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, TeamUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_TeamUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_TeamUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_AcquisitionDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_AcquisitionDateTime = { "AcquisitionDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, AcquisitionDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_AcquisitionDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_AcquisitionDateTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History_Inner = { "History", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELTitleHolderHistory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELTitleHolderInfo" },
		{ "ModuleRelativePath", "Public/ELTitleHolderInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History = { "History", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELTitleHolderInfo, History), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Belt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_Holder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_HolderMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_DefendCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_TeamUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_AcquisitionDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::NewProp_History,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELTitleHolderInfo",
		sizeof(FELTitleHolderInfo),
		alignof(FELTitleHolderInfo),
		Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELTitleHolderInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELTitleHolderInfo"), sizeof(FELTitleHolderInfo), Get_Z_Construct_UScriptStruct_FELTitleHolderInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELTitleHolderInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELTitleHolderInfo_Hash() { return 3490325874U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
