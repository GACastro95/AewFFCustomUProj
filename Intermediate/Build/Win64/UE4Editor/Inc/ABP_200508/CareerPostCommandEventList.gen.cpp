// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPostCommandEventList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPostCommandEventList() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPostCommandEventList();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPostCommandEventCore();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerPostCommandEventList>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerPostCommandEventList cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerPostCommandEventList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPostCommandEventList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPostCommandEventList, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPostCommandEventList"), sizeof(FCareerPostCommandEventList), Get_Z_Construct_UScriptStruct_FCareerPostCommandEventList_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPostCommandEventList>()
{
	return FCareerPostCommandEventList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPostCommandEventList(FCareerPostCommandEventList::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPostCommandEventList"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPostCommandEventList
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPostCommandEventList()
	{
		UScriptStruct::DeferCppStructOps<FCareerPostCommandEventList>(FName(TEXT("CareerPostCommandEventList")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPostCommandEventList;
	struct Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightWorkout_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightWorkout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardRoutine_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StandardRoutine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntenseTraining_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IntenseTraining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dining_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dining_Vegetarian_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dining_Vegetarian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedicalTreatment_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MedicalTreatment_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MedicalTreatment_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MedicalTreatment_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSeeing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightSeeing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressConference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PressConference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TVShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TVShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutographSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutographSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Minigame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Male_Single_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Male_Single_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Male_Single_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Male_Single_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Male_Tag_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Male_Tag_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Male_Tag_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Male_Tag_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Female_Single_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Female_Single_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dark_Female_Single_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dark_Female_Single_B;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPostCommandEventList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_LightWorkout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_LightWorkout = { "LightWorkout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, LightWorkout), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_LightWorkout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_LightWorkout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_StandardRoutine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_StandardRoutine = { "StandardRoutine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, StandardRoutine), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_StandardRoutine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_StandardRoutine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_IntenseTraining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_IntenseTraining = { "IntenseTraining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, IntenseTraining), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_IntenseTraining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_IntenseTraining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining = { "Dining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dining), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_Vegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_Vegetarian = { "Dining_Vegetarian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dining_Vegetarian), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_Vegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_Vegetarian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_A = { "MedicalTreatment_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, MedicalTreatment_A), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_B = { "MedicalTreatment_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, MedicalTreatment_B), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_SightSeeing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_SightSeeing = { "SightSeeing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, SightSeeing), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_SightSeeing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_SightSeeing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_PressConference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_PressConference = { "PressConference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, PressConference), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_PressConference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_PressConference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_TVShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_TVShow = { "TVShow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, TVShow), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_TVShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_TVShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_AutographSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_AutographSession = { "AutographSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, AutographSession), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_AutographSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_AutographSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Minigame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Minigame), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Minigame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Minigame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_A = { "Dark_Male_Single_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Male_Single_A), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_B = { "Dark_Male_Single_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Male_Single_B), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_A = { "Dark_Male_Tag_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Male_Tag_A), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_B = { "Dark_Male_Tag_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Male_Tag_B), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_A = { "Dark_Female_Single_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Female_Single_A), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPostCommandEventList" },
		{ "ModuleRelativePath", "Public/CareerPostCommandEventList.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_B = { "Dark_Female_Single_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPostCommandEventList, Dark_Female_Single_B), Z_Construct_UScriptStruct_FCareerPostCommandEventCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_B_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_LightWorkout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_StandardRoutine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_IntenseTraining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dining_Vegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_MedicalTreatment_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_SightSeeing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_PressConference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_TVShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_AutographSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Minigame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Single_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Male_Tag_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::NewProp_Dark_Female_Single_B,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerPostCommandEventList",
		sizeof(FCareerPostCommandEventList),
		alignof(FCareerPostCommandEventList),
		Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPostCommandEventList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPostCommandEventList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPostCommandEventList"), sizeof(FCareerPostCommandEventList), Get_Z_Construct_UScriptStruct_FCareerPostCommandEventList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPostCommandEventList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPostCommandEventList_Hash() { return 49207306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
