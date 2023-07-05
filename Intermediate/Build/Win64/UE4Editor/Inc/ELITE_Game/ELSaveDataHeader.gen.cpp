// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELSaveDataHeader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSaveDataHeader() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELSaveDataHeader();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataCompressionFormat();
// End Cross Module References
class UScriptStruct* FELSaveDataHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELSaveDataHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSaveDataHeader, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELSaveDataHeader"), sizeof(FELSaveDataHeader), Get_Z_Construct_UScriptStruct_FELSaveDataHeader_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELSaveDataHeader>()
{
	return FELSaveDataHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSaveDataHeader(FELSaveDataHeader::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELSaveDataHeader"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELSaveDataHeader
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELSaveDataHeader()
	{
		UScriptStruct::DeferCppStructOps<FELSaveDataHeader>(FName(TEXT("ELSaveDataHeader")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELSaveDataHeader;
	struct Z_Construct_UScriptStruct_FELSaveDataHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionMajor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VersionMajor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionMinor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VersionMinor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSaveDataHeader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Guid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMajor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMajor = { "VersionMajor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, VersionMajor), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMajor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMajor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMinor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMinor = { "VersionMinor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, VersionMinor), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMinor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMinor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType = { "SaveDataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, SaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, Format), Z_Construct_UEnum_ELITE_Game_ESaveDataCompressionFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSaveDataHeader" },
		{ "ModuleRelativePath", "Public/ELSaveDataHeader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSaveDataHeader, UserIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_UserIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMajor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_VersionMinor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_SaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::NewProp_UserIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELSaveDataHeader",
		sizeof(FELSaveDataHeader),
		alignof(FELSaveDataHeader),
		Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSaveDataHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSaveDataHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSaveDataHeader"), sizeof(FELSaveDataHeader), Get_Z_Construct_UScriptStruct_FELSaveDataHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSaveDataHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSaveDataHeader_Hash() { return 4071913092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
