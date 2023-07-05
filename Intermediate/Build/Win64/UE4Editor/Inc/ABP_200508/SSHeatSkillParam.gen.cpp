// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatSkillParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatSkillParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillTarget();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillIconType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSHeatSkillParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSHeatSkillParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSHeatSkillParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatSkillParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatSkillParam"), sizeof(FSSHeatSkillParam), Get_Z_Construct_UScriptStruct_FSSHeatSkillParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatSkillParam>()
{
	return FSSHeatSkillParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatSkillParam(FSSHeatSkillParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatSkillParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillParam()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatSkillParam>(FName(TEXT("SSHeatSkillParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatSkillParam;
	struct Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetCategory1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCategory1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetCategory1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetCategory2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCategory2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetCategory2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetCategory3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCategory3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetCategory3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IconType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IconType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatSkillParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Cost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Cost_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, Kind), Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1 = { "TargetCategory1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, TargetCategory1), Z_Construct_UEnum_ABP_200508_ESSHeatSkillTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2 = { "TargetCategory2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, TargetCategory2), Z_Construct_UEnum_ABP_200508_ESSHeatSkillTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3 = { "TargetCategory3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, TargetCategory3), Z_Construct_UEnum_ABP_200508_ESSHeatSkillTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType = { "IconType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, IconType), Z_Construct_UEnum_ABP_200508_ESSHeatSkillIconType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Image_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatSkillParam" },
		{ "ModuleRelativePath", "Public/SSHeatSkillParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatSkillParam, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_TargetCategory3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_IconType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::NewProp_Image,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSHeatSkillParam",
		sizeof(FSSHeatSkillParam),
		alignof(FSSHeatSkillParam),
		Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatSkillParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatSkillParam"), sizeof(FSSHeatSkillParam), Get_Z_Construct_UScriptStruct_FSSHeatSkillParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatSkillParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatSkillParam_Hash() { return 4046511771U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
