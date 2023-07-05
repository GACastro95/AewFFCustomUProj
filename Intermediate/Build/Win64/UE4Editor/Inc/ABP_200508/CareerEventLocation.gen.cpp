// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventLocation() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventLocation();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEventLocation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEventLocation cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEventLocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventLocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventLocation, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventLocation"), sizeof(FCareerEventLocation), Get_Z_Construct_UScriptStruct_FCareerEventLocation_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventLocation>()
{
	return FCareerEventLocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventLocation(FCareerEventLocation::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventLocation"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventLocation
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventLocation()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventLocation>(FName(TEXT("CareerEventLocation")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventLocation;
	struct Z_Construct_UScriptStruct_FCareerEventLocation_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fPosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fPosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fPosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fPosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fPosZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fPosZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventLocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventLocation" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventLocation, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventLocation" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosX = { "fPosX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventLocation, fPosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventLocation" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosY = { "fPosY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventLocation, fPosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventLocation" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosZ = { "fPosZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventLocation, fPosZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventLocation" },
		{ "ModuleRelativePath", "Public/CareerEventLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fYaw = { "fYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventLocation, fYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fPosZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventLocation_Statics::NewProp_fYaw,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEventLocation",
		sizeof(FCareerEventLocation),
		alignof(FCareerEventLocation),
		Z_Construct_UScriptStruct_FCareerEventLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventLocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventLocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventLocation"), sizeof(FCareerEventLocation), Get_Z_Construct_UScriptStruct_FCareerEventLocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventLocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventLocation_Hash() { return 1469262429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
