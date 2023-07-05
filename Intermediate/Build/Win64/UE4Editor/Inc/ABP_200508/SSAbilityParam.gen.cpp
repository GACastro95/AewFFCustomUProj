// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAbilityParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAbilityParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityUseType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAbilityParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAbilityParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAbilityParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAbilityParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAbilityParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAbilityParam"), sizeof(FSSAbilityParam), Get_Z_Construct_UScriptStruct_FSSAbilityParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAbilityParam>()
{
	return FSSAbilityParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAbilityParam(FSSAbilityParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAbilityParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAbilityParam>(FName(TEXT("SSAbilityParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAbilityParam;
	struct Z_Construct_UScriptStruct_FSSAbilityParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opened_MetaData[];
#endif
		static void NewProp_Opened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Opened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIUsable_MetaData[];
#endif
		static void NewProp_AIUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AIUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockStampedeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockStampedeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UseType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UseType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value_1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectiveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectiveTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EffectRowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAbilityParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_SortKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_SortKey = { "SortKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, SortKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_SortKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_SortKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened_SetBit(void* Obj)
	{
		((FSSAbilityParam*)Obj)->Opened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened = { "Opened", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSAbilityParam), &Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable_SetBit(void* Obj)
	{
		((FSSAbilityParam*)Obj)->AIUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable = { "AIUsable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSAbilityParam), &Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UnlockStampedeLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UnlockStampedeLevel = { "UnlockStampedeLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, UnlockStampedeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UnlockStampedeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UnlockStampedeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Cost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Cost_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType = { "UseType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, UseType), Z_Construct_UEnum_ABP_200508_ESSAbilityUseType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1 = { "Kind_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, Kind_1), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_1 = { "Value_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, Value_1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2 = { "Kind_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, Kind_2), Z_Construct_UEnum_ABP_200508_ESSAbilityKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_2 = { "Value_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, Value_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_CoolTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_CoolTime = { "CoolTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, CoolTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_CoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_CoolTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectiveTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectiveTime = { "EffectiveTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, EffectiveTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectiveTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAbilityParam" },
		{ "ModuleRelativePath", "Public/SSAbilityParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectRowName = { "EffectRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAbilityParam, EffectRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectRowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAbilityParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_SortKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Opened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_AIUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UnlockStampedeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_UseType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Kind_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_Value_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_CoolTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectiveTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAbilityParam_Statics::NewProp_EffectRowName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAbilityParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAbilityParam",
		sizeof(FSSAbilityParam),
		alignof(FSSAbilityParam),
		Z_Construct_UScriptStruct_FSSAbilityParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAbilityParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAbilityParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAbilityParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAbilityParam"), sizeof(FSSAbilityParam), Get_Z_Construct_UScriptStruct_FSSAbilityParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAbilityParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAbilityParam_Hash() { return 3488142997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
