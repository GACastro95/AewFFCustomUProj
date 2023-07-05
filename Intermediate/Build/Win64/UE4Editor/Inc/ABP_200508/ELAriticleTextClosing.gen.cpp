// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAriticleTextClosing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAriticleTextClosing() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextClosing();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELAriticleTextSubject();
// End Cross Module References

static_assert(std::is_polymorphic<FELAriticleTextClosing>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELAriticleTextClosing cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELAriticleTextClosing::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextClosing_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELAriticleTextClosing, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELAriticleTextClosing"), sizeof(FELAriticleTextClosing), Get_Z_Construct_UScriptStruct_FELAriticleTextClosing_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELAriticleTextClosing>()
{
	return FELAriticleTextClosing::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELAriticleTextClosing(FELAriticleTextClosing::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELAriticleTextClosing"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextClosing
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextClosing()
	{
		UScriptStruct::DeferCppStructOps<FELAriticleTextClosing>(FName(TEXT("ELAriticleTextClosing")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextClosing;
	struct Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Japanese_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Japanese;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AriticleText_Male_st_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AriticleText_Male_st;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AriticleText_Female_st_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AriticleText_Female_st;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Subject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerHP1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinnerHP1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerHP2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinnerHP2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoserHP1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoserHP1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoserHP2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoserHP2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerScore1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinnerScore1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinnerScore2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinnerScore2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Single_MetaData[];
#endif
		static void NewProp_Single_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Single;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static void NewProp_Tag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreeWay_MetaData[];
#endif
		static void NewProp_ThreeWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThreeWay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourWay_MetaData[];
#endif
		static void NewProp_FourWay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FourWay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cashino_MetaData[];
#endif
		static void NewProp_Cashino_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Cashino;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exploding_MetaData[];
#endif
		static void NewProp_Exploding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Exploding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightsOut_MetaData[];
#endif
		static void NewProp_LightsOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LightsOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallsCountAnywhere_MetaData[];
#endif
		static void NewProp_FallsCountAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FallsCountAnywhere;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELAriticleTextClosing>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Japanese_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Japanese = { "Japanese", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, Japanese), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Japanese_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Japanese_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Male_st_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Male_st = { "AriticleText_Male_st", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, AriticleText_Male_st), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Male_st_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Male_st_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Female_st_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Female_st = { "AriticleText_Female_st", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, AriticleText_Female_st), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Female_st_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Female_st_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, Subject), Z_Construct_UEnum_ABP_200508_EELAriticleTextSubject, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP1 = { "WinnerHP1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, WinnerHP1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP2 = { "WinnerHP2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, WinnerHP2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP1 = { "LoserHP1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, LoserHP1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP2 = { "LoserHP2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, LoserHP2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime1 = { "MatchTime1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, MatchTime1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime2 = { "MatchTime2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, MatchTime2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore1 = { "WinnerScore1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, WinnerScore1), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore2 = { "WinnerScore2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextClosing, WinnerScore2), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->Single = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single = { "Single", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->Tag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->ThreeWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay = { "ThreeWay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->FourWay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay = { "FourWay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->Cashino = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino = { "Cashino", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->Exploding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding = { "Exploding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->LightsOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut = { "LightsOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextClosing" },
		{ "ModuleRelativePath", "Public/ELAriticleTextClosing.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere_SetBit(void* Obj)
	{
		((FELAriticleTextClosing*)Obj)->FallsCountAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere = { "FallsCountAnywhere", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextClosing), &Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Japanese,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Male_st,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_AriticleText_Female_st,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerHP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LoserHP2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_MatchTime2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_WinnerScore2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Single,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_ThreeWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FourWay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Cashino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_Exploding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_LightsOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::NewProp_FallsCountAnywhere,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELAriticleTextClosing",
		sizeof(FELAriticleTextClosing),
		alignof(FELAriticleTextClosing),
		Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextClosing()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextClosing_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELAriticleTextClosing"), sizeof(FELAriticleTextClosing), Get_Z_Construct_UScriptStruct_FELAriticleTextClosing_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELAriticleTextClosing_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextClosing_Hash() { return 4231081812U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
