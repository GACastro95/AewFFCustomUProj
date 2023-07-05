// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPropData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPropData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPropData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerPropData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerPropData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerPropData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPropData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPropData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPropData"), sizeof(FCareerPropData), Get_Z_Construct_UScriptStruct_FCareerPropData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPropData>()
{
	return FCareerPropData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPropData(FCareerPropData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPropData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPropData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPropData()
	{
		UScriptStruct::DeferCppStructOps<FCareerPropData>(FName(TEXT("CareerPropData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPropData;
	struct Z_Construct_UScriptStruct_FCareerPropData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerPropModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CareerPropModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fOffsetX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fOffsetX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fOffsetY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fOffsetY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fOffsetZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fOffsetZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRoll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPropData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPropData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_CareerPropModel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_CareerPropModel = { "CareerPropModel", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, CareerPropModel), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_CareerPropModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_CareerPropModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_AttachSocket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_AttachSocket = { "AttachSocket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, AttachSocket), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_AttachSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_AttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetX = { "fOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fOffsetX), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetY = { "fOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fOffsetY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetZ = { "fOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fOffsetZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fPitch = { "fPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fYaw = { "fYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPropData" },
		{ "ModuleRelativePath", "Public/CareerPropData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fRoll = { "fRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPropData, fRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fRoll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPropData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_CareerPropModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_AttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fOffsetZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPropData_Statics::NewProp_fRoll,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPropData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerPropData",
		sizeof(FCareerPropData),
		alignof(FCareerPropData),
		Z_Construct_UScriptStruct_FCareerPropData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPropData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPropData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPropData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPropData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPropData"), sizeof(FCareerPropData), Get_Z_Construct_UScriptStruct_FCareerPropData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPropData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPropData_Hash() { return 3035533351U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
