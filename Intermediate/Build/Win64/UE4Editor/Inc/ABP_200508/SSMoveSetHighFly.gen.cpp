// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveSetHighFly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveSetHighFly() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetHighFly();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveLevel();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMoveSetHighFly>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMoveSetHighFly cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMoveSetHighFly::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetHighFly_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveSetHighFly, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveSetHighFly"), sizeof(FSSMoveSetHighFly), Get_Z_Construct_UScriptStruct_FSSMoveSetHighFly_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveSetHighFly>()
{
	return FSSMoveSetHighFly::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveSetHighFly(FSSMoveSetHighFly::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveSetHighFly"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetHighFly
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetHighFly()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveSetHighFly>(FName(TEXT("SSMoveSetHighFly")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetHighFly;
	struct Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSetLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveSetLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirPunch1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirPunch1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirPunch1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirPunch2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirPunch2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirPunch2_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirKick1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirKick1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirKick1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirKick2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirKick2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirKick2_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirThrow1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirThrow1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirThrow1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirThrow2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AirThrow2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AirThrow2_Lv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveSetHighFly>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_MoveSetLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_MoveSetLevel = { "MoveSetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, MoveSetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_MoveSetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_MoveSetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1 = { "AirPunch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirPunch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv = { "AirPunch1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirPunch1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2 = { "AirPunch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirPunch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv = { "AirPunch2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirPunch2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1 = { "AirKick1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirKick1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv = { "AirKick1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirKick1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2 = { "AirKick2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirKick2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv = { "AirKick2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirKick2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1 = { "AirThrow1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirThrow1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv = { "AirThrow1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirThrow1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2 = { "AirThrow2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirThrow2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetHighFly" },
		{ "ModuleRelativePath", "Public/SSMoveSetHighFly.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv = { "AirThrow2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetHighFly, AirThrow2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_MoveSetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirPunch2_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirKick2_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::NewProp_AirThrow2_Lv,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMoveSetHighFly",
		sizeof(FSSMoveSetHighFly),
		alignof(FSSMoveSetHighFly),
		Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetHighFly()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetHighFly_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveSetHighFly"), sizeof(FSSMoveSetHighFly), Get_Z_Construct_UScriptStruct_FSSMoveSetHighFly_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveSetHighFly_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetHighFly_Hash() { return 1587279286U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
