// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerVehicleMoveCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerVehicleMoveCamera() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerVehicleMoveCamera();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerVehicleMoveCamera>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerVehicleMoveCamera cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerVehicleMoveCamera::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerVehicleMoveCamera"), sizeof(FCareerVehicleMoveCamera), Get_Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerVehicleMoveCamera>()
{
	return FCareerVehicleMoveCamera::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerVehicleMoveCamera(FCareerVehicleMoveCamera::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerVehicleMoveCamera"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerVehicleMoveCamera
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerVehicleMoveCamera()
	{
		UScriptStruct::DeferCppStructOps<FCareerVehicleMoveCamera>(FName(TEXT("CareerVehicleMoveCamera")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerVehicleMoveCamera;
	struct Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmRotY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmRotY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerVehicleMoveCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerVehicleMoveCamera>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVehicleMoveCamera" },
		{ "ModuleRelativePath", "Public/CareerVehicleMoveCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVehicleMoveCamera, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVehicleMoveCamera" },
		{ "ModuleRelativePath", "Public/CareerVehicleMoveCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVehicleMoveCamera, SpringArmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmRotY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVehicleMoveCamera" },
		{ "ModuleRelativePath", "Public/CareerVehicleMoveCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmRotY = { "SpringArmRotY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVehicleMoveCamera, SpringArmRotY), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmRotY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmRotY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerVehicleMoveCamera" },
		{ "ModuleRelativePath", "Public/CareerVehicleMoveCamera.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerVehicleMoveCamera, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_FieldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_SpringArmRotY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::NewProp_FieldOfView,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerVehicleMoveCamera",
		sizeof(FCareerVehicleMoveCamera),
		alignof(FCareerVehicleMoveCamera),
		Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerVehicleMoveCamera()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerVehicleMoveCamera"), sizeof(FCareerVehicleMoveCamera), Get_Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerVehicleMoveCamera_Hash() { return 1936524454U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
