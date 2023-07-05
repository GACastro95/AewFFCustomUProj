// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventActionInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventActionInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventActionInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSEType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCamera();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScreenEffect();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventActionMember();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerProp();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventTarget();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventDisp();
// End Cross Module References
class UScriptStruct* FCareerEventActionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventActionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventActionInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventActionInfo"), sizeof(FCareerEventActionInfo), Get_Z_Construct_UScriptStruct_FCareerEventActionInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventActionInfo>()
{
	return FCareerEventActionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventActionInfo(FCareerEventActionInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventActionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventActionInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventActionInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventActionInfo>(FName(TEXT("CareerEventActionInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventActionInfo;
	struct Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BGM_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGM_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BGM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenEffect_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScreenEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TalkMem_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TalkMem_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TalkMem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_TalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_TalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_FacialAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_FacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_AnimType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemA_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemB_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemC_Yaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Yaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MemD_Yaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Prop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Prop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Prop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Prop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemA_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemB_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemC_PropAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_PropAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemD_PropAnim;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Target_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Target;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Disp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Disp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Disp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventActionInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE = { "SE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, SE), Z_Construct_UEnum_ABP_200508_ECareerSEType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM = { "BGM", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, BGM), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, Camera), Z_Construct_UScriptStruct_FCareerEventCamera, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect = { "ScreenEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, ScreenEffect), Z_Construct_UEnum_ABP_200508_ECareerScreenEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TextID = { "TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TextID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem = { "TalkMem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, TalkMem), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_TalkAnim = { "MemA_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_TalkAnim = { "MemB_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_TalkAnim = { "MemC_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_TalkAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_TalkAnim = { "MemD_TalkAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_TalkAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_TalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_TalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_FacialAnim = { "MemA_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_FacialAnim = { "MemB_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_FacialAnim = { "MemC_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_FacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_FacialAnim = { "MemD_FacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_FacialAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_FacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_FacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_AnimType = { "MemA_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_AnimType = { "MemB_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_AnimType = { "MemC_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_AnimType = { "MemD_AnimType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_AnimType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_AnimType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Yaw = { "MemA_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Yaw = { "MemB_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Yaw = { "MemC_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Yaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Yaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Yaw = { "MemD_Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Yaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop = { "MemA_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop = { "MemB_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop = { "MemC_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop = { "MemD_Prop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_Prop), Z_Construct_UEnum_ABP_200508_ECareerProp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_PropAnim = { "MemA_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_PropAnim = { "MemB_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_PropAnim = { "MemC_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_PropAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_PropAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_PropAnim = { "MemD_PropAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_PropAnim), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_PropAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_PropAnim_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target = { "MemA_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target = { "MemB_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target = { "MemC_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target = { "MemD_Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_Target), Z_Construct_UEnum_ABP_200508_ECareerEventTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp = { "MemA_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemA_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp = { "MemB_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemB_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp = { "MemC_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemC_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventActionInfo" },
		{ "ModuleRelativePath", "Public/CareerEventActionInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp = { "MemD_Disp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventActionInfo, MemD_Disp), Z_Construct_UEnum_ABP_200508_ECareerEventDisp, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_SE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_BGM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_ScreenEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_TalkMem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_TalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_FacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Yaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Prop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_PropAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemA_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemB_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemC_Disp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::NewProp_MemD_Disp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerEventActionInfo",
		sizeof(FCareerEventActionInfo),
		alignof(FCareerEventActionInfo),
		Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventActionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventActionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventActionInfo"), sizeof(FCareerEventActionInfo), Get_Z_Construct_UScriptStruct_FCareerEventActionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventActionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventActionInfo_Hash() { return 3235236487U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
