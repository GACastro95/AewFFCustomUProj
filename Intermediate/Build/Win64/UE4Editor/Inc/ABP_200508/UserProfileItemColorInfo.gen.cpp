// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserProfileItemColorInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfileItemColorInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileItemColorInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EEditProfileColorType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FUserProfileItemColorInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUserProfileItemColorInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUserProfileItemColorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserProfileItemColorInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("UserProfileItemColorInfo"), sizeof(FUserProfileItemColorInfo), Get_Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FUserProfileItemColorInfo>()
{
	return FUserProfileItemColorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUserProfileItemColorInfo(FUserProfileItemColorInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("UserProfileItemColorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileItemColorInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileItemColorInfo()
	{
		UScriptStruct::DeferCppStructOps<FUserProfileItemColorInfo>(FName(TEXT("UserProfileItemColorInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFUserProfileItemColorInfo;
	struct Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ColorType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColorParamList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColorListIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultColorListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UserProfileItemColorInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserProfileItemColorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileItemColorInfo" },
		{ "ModuleRelativePath", "Public/UserProfileItemColorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileItemColorInfo, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_UniqueID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileItemColorInfo" },
		{ "ModuleRelativePath", "Public/UserProfileItemColorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType = { "ColorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileItemColorInfo, ColorType), Z_Construct_UEnum_ABP_200508_EEditProfileColorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList_Inner = { "ColorParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileItemColorInfo" },
		{ "ModuleRelativePath", "Public/UserProfileItemColorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList = { "ColorParamList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileItemColorInfo, ColorParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_DefaultColorListIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UserProfileItemColorInfo" },
		{ "ModuleRelativePath", "Public/UserProfileItemColorInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_DefaultColorListIndex = { "DefaultColorListIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUserProfileItemColorInfo, DefaultColorListIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_DefaultColorListIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_DefaultColorListIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_ColorParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::NewProp_DefaultColorListIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UserProfileItemColorInfo",
		sizeof(FUserProfileItemColorInfo),
		alignof(FUserProfileItemColorInfo),
		Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserProfileItemColorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UserProfileItemColorInfo"), sizeof(FUserProfileItemColorInfo), Get_Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUserProfileItemColorInfo_Hash() { return 4138027932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
