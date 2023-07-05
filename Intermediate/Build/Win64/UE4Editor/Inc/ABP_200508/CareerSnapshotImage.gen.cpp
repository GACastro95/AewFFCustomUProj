// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerSnapshotImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerSnapshotImage() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotImage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerSnapshotImage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotImage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerSnapshotImage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerSnapshotImage"), sizeof(FCareerSnapshotImage), Get_Z_Construct_UScriptStruct_FCareerSnapshotImage_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerSnapshotImage>()
{
	return FCareerSnapshotImage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerSnapshotImage(FCareerSnapshotImage::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerSnapshotImage"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotImage
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotImage()
	{
		UScriptStruct::DeferCppStructOps<FCareerSnapshotImage>(FName(TEXT("CareerSnapshotImage")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerSnapshotImage;
	struct Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PhotoData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhotoData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerSnapshotImage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerSnapshotImage>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData_Inner = { "PhotoData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerSnapshotImage" },
		{ "ModuleRelativePath", "Public/CareerSnapshotImage.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData = { "PhotoData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerSnapshotImage, PhotoData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::NewProp_PhotoData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerSnapshotImage",
		sizeof(FCareerSnapshotImage),
		alignof(FCareerSnapshotImage),
		Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotImage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotImage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerSnapshotImage"), sizeof(FCareerSnapshotImage), Get_Z_Construct_UScriptStruct_FCareerSnapshotImage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerSnapshotImage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerSnapshotImage_Hash() { return 3692707923U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
