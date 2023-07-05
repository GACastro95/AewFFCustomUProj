// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerUseTurnActonImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerUseTurnActonImage() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerUseTurnActonImage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerUseTurnActonImage"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerUseTurnActonImage>()
	{
		return ECareerUseTurnActonImage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerUseTurnActonImage(ECareerUseTurnActonImage_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerUseTurnActonImage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage_Hash() { return 2303892654U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerUseTurnActonImage"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerUseTurnActonImage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerUseTurnActonImage::Dark", (int64)ECareerUseTurnActonImage::Dark },
				{ "ECareerUseTurnActonImage::Rampage", (int64)ECareerUseTurnActonImage::Rampage },
				{ "ECareerUseTurnActonImage::TraningLv1", (int64)ECareerUseTurnActonImage::TraningLv1 },
				{ "ECareerUseTurnActonImage::TraningLv2", (int64)ECareerUseTurnActonImage::TraningLv2 },
				{ "ECareerUseTurnActonImage::TraningLv3", (int64)ECareerUseTurnActonImage::TraningLv3 },
				{ "ECareerUseTurnActonImage::Dining", (int64)ECareerUseTurnActonImage::Dining },
				{ "ECareerUseTurnActonImage::SightSeeing", (int64)ECareerUseTurnActonImage::SightSeeing },
				{ "ECareerUseTurnActonImage::Promotion", (int64)ECareerUseTurnActonImage::Promotion },
				{ "ECareerUseTurnActonImage::Minigame", (int64)ECareerUseTurnActonImage::Minigame },
				{ "ECareerUseTurnActonImage::Hospital", (int64)ECareerUseTurnActonImage::Hospital },
				{ "ECareerUseTurnActonImage::Medical_A", (int64)ECareerUseTurnActonImage::Medical_A },
				{ "ECareerUseTurnActonImage::Medical_B", (int64)ECareerUseTurnActonImage::Medical_B },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dark.Name", "ECareerUseTurnActonImage::Dark" },
				{ "Dining.Name", "ECareerUseTurnActonImage::Dining" },
				{ "Hospital.Name", "ECareerUseTurnActonImage::Hospital" },
				{ "Medical_A.Name", "ECareerUseTurnActonImage::Medical_A" },
				{ "Medical_B.Name", "ECareerUseTurnActonImage::Medical_B" },
				{ "Minigame.Name", "ECareerUseTurnActonImage::Minigame" },
				{ "ModuleRelativePath", "Public/ECareerUseTurnActonImage.h" },
				{ "Promotion.Name", "ECareerUseTurnActonImage::Promotion" },
				{ "Rampage.Name", "ECareerUseTurnActonImage::Rampage" },
				{ "SightSeeing.Name", "ECareerUseTurnActonImage::SightSeeing" },
				{ "TraningLv1.Name", "ECareerUseTurnActonImage::TraningLv1" },
				{ "TraningLv2.Name", "ECareerUseTurnActonImage::TraningLv2" },
				{ "TraningLv3.Name", "ECareerUseTurnActonImage::TraningLv3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerUseTurnActonImage",
				"ECareerUseTurnActonImage",
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
