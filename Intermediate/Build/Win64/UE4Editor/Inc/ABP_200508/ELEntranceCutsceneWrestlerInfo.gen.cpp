// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneWrestlerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneWrestlerInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECharacterSkinType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSelectParamForNative();
// End Cross Module References
class UScriptStruct* FELEntranceCutsceneWrestlerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneWrestlerInfo"), sizeof(FELEntranceCutsceneWrestlerInfo), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneWrestlerInfo>()
{
	return FELEntranceCutsceneWrestlerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneWrestlerInfo(FELEntranceCutsceneWrestlerInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneWrestlerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerInfo()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneWrestlerInfo>(FName(TEXT("ELEntranceCutsceneWrestlerInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneWrestlerInfo;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Wrestler_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Wrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Costume_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Costume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachBelts_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachBelts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachBelts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachBelts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDarkSkinMode_MetaData[];
#endif
		static void NewProp_bDarkSkinMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDarkSkinMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGoldSkinMode_MetaData[];
#endif
		static void NewProp_bGoldSkinMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGoldSkinMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommentParameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlainAttireMode_MetaData[];
#endif
		static void NewProp_bPlainAttireMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlainAttireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEntrance_MetaData[];
#endif
		static void NewProp_DefaultEntrance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultEntrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseEntranceModel_MetaData[];
#endif
		static void NewProp_UseEntranceModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseEntranceModel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSelectParamNative_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSelectParamNative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneWrestlerInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler = { "Wrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, Wrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Costume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Costume = { "Costume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, Costume), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Costume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Costume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerIndex = { "WrestlerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, WrestlerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_Inner = { "AttachBelts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts = { "AttachBelts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, AttachBelts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerInfo*)Obj)->bDarkSkinMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode = { "bDarkSkinMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerInfo), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerInfo*)Obj)->bGoldSkinMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode = { "bGoldSkinMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerInfo), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType = { "SkinType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, SkinType), Z_Construct_UEnum_ABP_200508_ECharacterSkinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_CommentParameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_CommentParameter = { "CommentParameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, CommentParameter), Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_CommentParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_CommentParameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerInfo*)Obj)->bPlainAttireMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode = { "bPlainAttireMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerInfo), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerInfo*)Obj)->DefaultEntrance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance = { "DefaultEntrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerInfo), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel_SetBit(void* Obj)
	{
		((FELEntranceCutsceneWrestlerInfo*)Obj)->UseEntranceModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel = { "UseEntranceModel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneWrestlerInfo), &Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerSelectParamNative_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerSelectParamNative = { "WrestlerSelectParamNative", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneWrestlerInfo, WrestlerSelectParamNative), Z_Construct_UScriptStruct_FELWrestlerSelectParamForNative, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerSelectParamNative_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerSelectParamNative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Costume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_AttachBelts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bDarkSkinMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bGoldSkinMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_SkinType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_CommentParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_bPlainAttireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_DefaultEntrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_UseEntranceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::NewProp_WrestlerSelectParamNative,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELEntranceCutsceneWrestlerInfo",
		sizeof(FELEntranceCutsceneWrestlerInfo),
		alignof(FELEntranceCutsceneWrestlerInfo),
		Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneWrestlerInfo"), sizeof(FELEntranceCutsceneWrestlerInfo), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneWrestlerInfo_Hash() { return 1191345964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
