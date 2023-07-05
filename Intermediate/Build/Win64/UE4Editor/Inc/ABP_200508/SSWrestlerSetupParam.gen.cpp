// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerSetupParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerSetupParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameText();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyHeightType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EBodyWeightType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EFanReaction();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditBodyParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttireParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
// End Cross Module References
class UScriptStruct* FSSWrestlerSetupParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerSetupParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerSetupParam"), sizeof(FSSWrestlerSetupParam), Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerSetupParam>()
{
	return FSSWrestlerSetupParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerSetupParam(FSSWrestlerSetupParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerSetupParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerSetupParam>(FName(TEXT("SSWrestlerSetupParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerSetupParam;
	struct Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Available_MetaData[];
#endif
		static void NewProp_Available_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Available;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SSWrestlerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSWrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SSWrestlerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyHeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyHeightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BodyWeightType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyWeightType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BodyWeightType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FanReaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FanReaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FanReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VoiceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditBodyParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditBodyParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BodyHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RingAttire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RosterAttire;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerSetupParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available_SetBit(void* Obj)
	{
		((FSSWrestlerSetupParam*)Obj)->Available = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available = { "Available", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSWrestlerSetupParam), &Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType = { "SSWrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, SSWrestlerType), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, BodyType), Z_Construct_UEnum_ELITE_Game_EBodyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType = { "BodyHeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, BodyHeightType), Z_Construct_UEnum_ELITE_Game_EBodyHeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType = { "BodyWeightType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, BodyWeightType), Z_Construct_UEnum_ELITE_Game_EBodyWeightType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction = { "FanReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, FanReaction), Z_Construct_UEnum_ELITE_Game_EFanReaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_VoiceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_VoiceType = { "VoiceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, VoiceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_VoiceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_VoiceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_EditBodyParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_EditBodyParam = { "EditBodyParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, EditBodyParam), Z_Construct_UScriptStruct_FEditBodyParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_EditBodyParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_EditBodyParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeight = { "BodyHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, BodyHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_DefaultAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_DefaultAttire = { "DefaultAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, DefaultAttire), Z_Construct_UScriptStruct_FSSAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_DefaultAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_DefaultAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RingAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RingAttire = { "RingAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, RingAttire), Z_Construct_UScriptStruct_FSSAttireParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RingAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RingAttire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RosterAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerSetupParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerSetupParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RosterAttire = { "RosterAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerSetupParam, RosterAttire), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RosterAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RosterAttire_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Available,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_SSWrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyWeightType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_FanReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_VoiceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_EditBodyParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_BodyHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_DefaultAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RingAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::NewProp_RosterAttire,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSWrestlerSetupParam",
		sizeof(FSSWrestlerSetupParam),
		alignof(FSSWrestlerSetupParam),
		Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSetupParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerSetupParam"), sizeof(FSSWrestlerSetupParam), Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerSetupParam_Hash() { return 2232764827U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
