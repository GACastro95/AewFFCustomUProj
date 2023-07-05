// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventCameraPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventCameraPosition() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCameraPosition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventCameraType();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerEventCameraPosition>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerEventCameraPosition cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerEventCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventCameraPosition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventCameraPosition"), sizeof(FCareerEventCameraPosition), Get_Z_Construct_UScriptStruct_FCareerEventCameraPosition_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventCameraPosition>()
{
	return FCareerEventCameraPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventCameraPosition(FCareerEventCameraPosition::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraPosition
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraPosition()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventCameraPosition>(FName(TEXT("CareerEventCameraPosition")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventCameraPosition;
	struct Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eCameraType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eCameraType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eCameraType;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventCameraPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType = { "eCameraType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, eCameraType), Z_Construct_UEnum_ABP_200508_ECareerEventCameraType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosX = { "fPosX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fPosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosY = { "fPosY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fPosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosZ_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosZ = { "fPosZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fPosZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPitch = { "fPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fYaw = { "fYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fRoll_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fRoll = { "fRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fRoll), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fFieldOfView_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerEventCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fFieldOfView = { "fFieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventCameraPosition, fFieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fFieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_eCameraType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPosZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::NewProp_fFieldOfView,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerEventCameraPosition",
		sizeof(FCareerEventCameraPosition),
		alignof(FCareerEventCameraPosition),
		Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventCameraPosition"), sizeof(FCareerEventCameraPosition), Get_Z_Construct_UScriptStruct_FCareerEventCameraPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventCameraPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventCameraPosition_Hash() { return 2026408774U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
