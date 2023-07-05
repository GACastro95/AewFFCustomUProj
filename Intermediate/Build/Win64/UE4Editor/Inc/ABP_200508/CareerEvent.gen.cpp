// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEvent() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEvent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerReverbType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRingObject();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMemberType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAttireType();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEvent>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEvent cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEvent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEvent"), sizeof(FCareerEvent), Get_Z_Construct_UScriptStruct_FCareerEvent_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEvent>()
{
	return FCareerEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEvent(FCareerEvent::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEvent
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEvent()
	{
		UScriptStruct::DeferCppStructOps<FCareerEvent>(FName(TEXT("CareerEvent")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEvent;
	struct Z_Construct_UScriptStruct_FCareerEvent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEvent_MetaData[];
#endif
		static void NewProp_AutoEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoEvent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StageType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverbType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RingObject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RingObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BGMType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGMType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BGMType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaTP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AreaTP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_No_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_No;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_TP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemA_TP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemA_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemA_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemA_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_No_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_No;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_TP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemB_TP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemB_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemB_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemB_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_No_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_No;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_TP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemC_TP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemC_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemC_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemC_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_No_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_No_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_No;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_TP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemD_TP;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemD_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemD_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemD_Attire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtraLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent_SetBit(void* Obj)
	{
		((FCareerEvent*)Obj)->AutoEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent = { "AutoEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerEvent), &Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType = { "StageType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, StageType), Z_Construct_UEnum_ABP_200508_ECareerStageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType = { "ReverbType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, ReverbType), Z_Construct_UEnum_ABP_200508_ECareerReverbType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject = { "RingObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, RingObject), Z_Construct_UEnum_ABP_200508_ECareerRingObject, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType = { "BGMType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, BGMType), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AreaTP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AreaTP = { "AreaTP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, AreaTP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AreaTP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AreaTP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MessageName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MessageName = { "MessageName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MessageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MessageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MessageName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type = { "MemA_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemA_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No = { "MemA_No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemA_No), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_TP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_TP = { "MemA_TP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemA_TP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_TP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_TP_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire = { "MemA_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemA_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type = { "MemB_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemB_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No = { "MemB_No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemB_No), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_TP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_TP = { "MemB_TP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemB_TP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_TP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_TP_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire = { "MemB_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemB_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type = { "MemC_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemC_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No = { "MemC_No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemC_No), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_TP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_TP = { "MemC_TP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemC_TP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_TP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_TP_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire = { "MemC_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemC_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type = { "MemD_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemD_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No = { "MemD_No", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemD_No), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_TP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_TP = { "MemD_TP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemD_TP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_TP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_TP_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire = { "MemD_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, MemD_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ExtraLight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEvent" },
		{ "ModuleRelativePath", "Public/CareerEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ExtraLight = { "ExtraLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEvent, ExtraLight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ExtraLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ExtraLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AutoEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_StageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ReverbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_RingObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_BGMType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_AreaTP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MessageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_TP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemA_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_TP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemB_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_TP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemC_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_No,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_TP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_MemD_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEvent_Statics::NewProp_ExtraLight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEvent",
		sizeof(FCareerEvent),
		alignof(FCareerEvent),
		Z_Construct_UScriptStruct_FCareerEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEvent"), sizeof(FCareerEvent), Get_Z_Construct_UScriptStruct_FCareerEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEvent_Hash() { return 3134897789U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
