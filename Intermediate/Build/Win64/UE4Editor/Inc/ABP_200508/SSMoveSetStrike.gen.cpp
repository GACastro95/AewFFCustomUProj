// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveSetStrike.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveSetStrike() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetStrike();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveLevel();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMoveSetStrike>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMoveSetStrike cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMoveSetStrike::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetStrike_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveSetStrike, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveSetStrike"), sizeof(FSSMoveSetStrike), Get_Z_Construct_UScriptStruct_FSSMoveSetStrike_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveSetStrike>()
{
	return FSSMoveSetStrike::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveSetStrike(FSSMoveSetStrike::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveSetStrike"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetStrike
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetStrike()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveSetStrike>(FName(TEXT("SSMoveSetStrike")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveSetStrike;
	struct Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Punch1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Punch1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Punch1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Punch2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Punch2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Punch2_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kick1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kick1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kick1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kick2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kick2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kick2_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashPunch1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DashPunch1_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch1_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DashPunch1_Lv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashPunch2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DashPunch2_Lv_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch2_Lv_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DashPunch2_Lv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveSetStrike>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType = { "WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, WrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_MoveSetLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_MoveSetLevel = { "MoveSetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, MoveSetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_MoveSetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_MoveSetLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1 = { "Punch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Punch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv = { "Punch1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Punch1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2 = { "Punch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Punch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv = { "Punch2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Punch2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1 = { "Kick1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Kick1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv = { "Kick1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Kick1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2 = { "Kick2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Kick2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv = { "Kick2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, Kick2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1 = { "DashPunch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, DashPunch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv = { "DashPunch1_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, DashPunch1_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2 = { "DashPunch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, DashPunch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveSetStrike" },
		{ "ModuleRelativePath", "Public/SSMoveSetStrike.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv = { "DashPunch2_Lv", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveSetStrike, DashPunch2_Lv), Z_Construct_UEnum_ABP_200508_ESSMoveLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_MoveSetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Punch2_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_Kick2_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch1_Lv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::NewProp_DashPunch2_Lv,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMoveSetStrike",
		sizeof(FSSMoveSetStrike),
		alignof(FSSMoveSetStrike),
		Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveSetStrike()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetStrike_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveSetStrike"), sizeof(FSSMoveSetStrike), Get_Z_Construct_UScriptStruct_FSSMoveSetStrike_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveSetStrike_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveSetStrike_Hash() { return 1216040782U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
