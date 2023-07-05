// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerEventDebugMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerEventDebugMode() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventDebugMode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerEventDebugMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerEventDebugMode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerEventDebugMode"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerEventDebugMode>()
	{
		return ECareerEventDebugMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerEventDebugMode(ECareerEventDebugMode_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerEventDebugMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerEventDebugMode_Hash() { return 3494351645U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventDebugMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerEventDebugMode"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerEventDebugMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerEventDebugMode::None", (int64)ECareerEventDebugMode::None },
				{ "ECareerEventDebugMode::CameraMove", (int64)ECareerEventDebugMode::CameraMove },
				{ "ECareerEventDebugMode::LocationMove", (int64)ECareerEventDebugMode::LocationMove },
				{ "ECareerEventDebugMode::Yaw", (int64)ECareerEventDebugMode::Yaw },
				{ "ECareerEventDebugMode::Animation", (int64)ECareerEventDebugMode::Animation },
				{ "ECareerEventDebugMode::Facial", (int64)ECareerEventDebugMode::Facial },
				{ "ECareerEventDebugMode::Talk", (int64)ECareerEventDebugMode::Talk },
				{ "ECareerEventDebugMode::Prop", (int64)ECareerEventDebugMode::Prop },
				{ "ECareerEventDebugMode::PropAnimation", (int64)ECareerEventDebugMode::PropAnimation },
				{ "ECareerEventDebugMode::Max", (int64)ECareerEventDebugMode::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Animation.Name", "ECareerEventDebugMode::Animation" },
				{ "BlueprintType", "true" },
				{ "CameraMove.Name", "ECareerEventDebugMode::CameraMove" },
				{ "Facial.Name", "ECareerEventDebugMode::Facial" },
				{ "LocationMove.Name", "ECareerEventDebugMode::LocationMove" },
				{ "Max.Name", "ECareerEventDebugMode::Max" },
				{ "ModuleRelativePath", "Public/ECareerEventDebugMode.h" },
				{ "None.Name", "ECareerEventDebugMode::None" },
				{ "Prop.Name", "ECareerEventDebugMode::Prop" },
				{ "PropAnimation.Name", "ECareerEventDebugMode::PropAnimation" },
				{ "Talk.Name", "ECareerEventDebugMode::Talk" },
				{ "Yaw.Name", "ECareerEventDebugMode::Yaw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerEventDebugMode",
				"ECareerEventDebugMode",
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
