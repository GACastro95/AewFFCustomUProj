// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerStory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerStory() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryTiming();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerStory>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerStory cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerStory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerStory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerStory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerStory"), sizeof(FCareerStory), Get_Z_Construct_UScriptStruct_FCareerStory_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerStory>()
{
	return FCareerStory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerStory(FCareerStory::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerStory"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStory
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStory()
	{
		UScriptStruct::DeferCppStructOps<FCareerStory>(FName(TEXT("CareerStory")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerStory;
	struct Z_Construct_UScriptStruct_FCareerStory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerTiming_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TriggerProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationArgInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OperationArgInt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationArgWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationArgWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationArgWrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationArgMatchID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationArgMatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationArgMatchID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_A_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branch_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Branch_A;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_B_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branch_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Branch_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_C_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branch_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Branch_C;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_D_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Branch_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Branch_D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerStory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerStory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming = { "TriggerTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, TriggerTiming), Z_Construct_UEnum_ABP_200508_ECareerStoryTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, OperationType), Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerProgress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerProgress = { "TriggerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, TriggerProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgInt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgInt = { "OperationArgInt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, OperationArgInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgInt_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID = { "OperationArgWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, OperationArgWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID = { "OperationArgMatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, OperationArgMatchID), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A = { "Condition_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Condition_A), Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_A = { "Branch_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Branch_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_A_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B = { "Condition_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Condition_B), Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_B = { "Branch_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Branch_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_B_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C = { "Condition_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Condition_C), Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_C = { "Branch_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Branch_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_C_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D = { "Condition_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Condition_D), Z_Construct_UEnum_ABP_200508_ECareerStoryResultCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStory" },
		{ "ModuleRelativePath", "Public/CareerStory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_D = { "Branch_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStory, Branch_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerStory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_TriggerProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_OperationArgMatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Condition_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStory_Statics::NewProp_Branch_D,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerStory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerStory",
		sizeof(FCareerStory),
		alignof(FCareerStory),
		Z_Construct_UScriptStruct_FCareerStory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerStory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerStory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerStory"), sizeof(FCareerStory), Get_Z_Construct_UScriptStruct_FCareerStory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerStory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerStory_Hash() { return 1443200751U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
