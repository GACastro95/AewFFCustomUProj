// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCameraManagerMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCameraManagerMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCameraManagerMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCameraManagerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCameraManagerMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCameraManagerMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCameraManagerMode>()
	{
		return ECareerCameraManagerMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCameraManagerMode(ECareerCameraManagerMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCameraManagerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCameraManagerMode_Hash() { return 2055187565U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCameraManagerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCameraManagerMode"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCameraManagerMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCameraManagerMode::None", (int64)ECareerCameraManagerMode::None },
				{ "ECareerCameraManagerMode::FreeCamera", (int64)ECareerCameraManagerMode::FreeCamera },
				{ "ECareerCameraManagerMode::SquareCamera", (int64)ECareerCameraManagerMode::SquareCamera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FreeCamera.Name", "ECareerCameraManagerMode::FreeCamera" },
				{ "ModuleRelativePath", "Public/ECareerCameraManagerMode.h" },
				{ "None.Name", "ECareerCameraManagerMode::None" },
				{ "SquareCamera.Name", "ECareerCameraManagerMode::SquareCamera" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCameraManagerMode",
				"ECareerCameraManagerMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
