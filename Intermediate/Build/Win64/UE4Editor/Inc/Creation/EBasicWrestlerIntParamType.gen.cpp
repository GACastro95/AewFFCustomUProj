// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EBasicWrestlerIntParamType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBasicWrestlerIntParamType() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EBasicWrestlerIntParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType, Z_Construct_UPackage__Script_Creation(), TEXT("EBasicWrestlerIntParamType"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EBasicWrestlerIntParamType>()
	{
		return EBasicWrestlerIntParamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBasicWrestlerIntParamType(EBasicWrestlerIntParamType_StaticEnum, TEXT("/Script/Creation"), TEXT("EBasicWrestlerIntParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType_Hash() { return 227105142U; }
	UEnum* Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBasicWrestlerIntParamType"), 0, Get_Z_Construct_UEnum_Creation_EBasicWrestlerIntParamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBasicWrestlerIntParamType::WrestlerID", (int64)EBasicWrestlerIntParamType::WrestlerID },
				{ "EBasicWrestlerIntParamType::Gender", (int64)EBasicWrestlerIntParamType::Gender },
				{ "EBasicWrestlerIntParamType::BodyType", (int64)EBasicWrestlerIntParamType::BodyType },
				{ "EBasicWrestlerIntParamType::BodyHeightType", (int64)EBasicWrestlerIntParamType::BodyHeightType },
				{ "EBasicWrestlerIntParamType::BodyWeightType", (int64)EBasicWrestlerIntParamType::BodyWeightType },
				{ "EBasicWrestlerIntParamType::Height", (int64)EBasicWrestlerIntParamType::Height },
				{ "EBasicWrestlerIntParamType::Weight", (int64)EBasicWrestlerIntParamType::Weight },
				{ "EBasicWrestlerIntParamType::FaceType", (int64)EBasicWrestlerIntParamType::FaceType },
				{ "EBasicWrestlerIntParamType::SkinColorID", (int64)EBasicWrestlerIntParamType::SkinColorID },
				{ "EBasicWrestlerIntParamType::LeftEyeType", (int64)EBasicWrestlerIntParamType::LeftEyeType },
				{ "EBasicWrestlerIntParamType::RightEyeType", (int64)EBasicWrestlerIntParamType::RightEyeType },
				{ "EBasicWrestlerIntParamType::BodyHeight", (int64)EBasicWrestlerIntParamType::BodyHeight },
				{ "EBasicWrestlerIntParamType::BodyMuscle", (int64)EBasicWrestlerIntParamType::BodyMuscle },
				{ "EBasicWrestlerIntParamType::BodyFat", (int64)EBasicWrestlerIntParamType::BodyFat },
				{ "EBasicWrestlerIntParamType::VoiceType", (int64)EBasicWrestlerIntParamType::VoiceType },
				{ "EBasicWrestlerIntParamType::RingAnnounce1", (int64)EBasicWrestlerIntParamType::RingAnnounce1 },
				{ "EBasicWrestlerIntParamType::RingAnnounce2", (int64)EBasicWrestlerIntParamType::RingAnnounce2 },
				{ "EBasicWrestlerIntParamType::RingAnnounce3", (int64)EBasicWrestlerIntParamType::RingAnnounce3 },
				{ "EBasicWrestlerIntParamType::BirthMonth", (int64)EBasicWrestlerIntParamType::BirthMonth },
				{ "EBasicWrestlerIntParamType::BirthDay", (int64)EBasicWrestlerIntParamType::BirthDay },
				{ "EBasicWrestlerIntParamType::HomeTownID", (int64)EBasicWrestlerIntParamType::HomeTownID },
				{ "EBasicWrestlerIntParamType::FightStyle", (int64)EBasicWrestlerIntParamType::FightStyle },
				{ "EBasicWrestlerIntParamType::FanReaction", (int64)EBasicWrestlerIntParamType::FanReaction },
				{ "EBasicWrestlerIntParamType::FavoriteProps", (int64)EBasicWrestlerIntParamType::FavoriteProps },
				{ "EBasicWrestlerIntParamType::Reserve024", (int64)EBasicWrestlerIntParamType::Reserve024 },
				{ "EBasicWrestlerIntParamType::Reserve025", (int64)EBasicWrestlerIntParamType::Reserve025 },
				{ "EBasicWrestlerIntParamType::Reserve026", (int64)EBasicWrestlerIntParamType::Reserve026 },
				{ "EBasicWrestlerIntParamType::Reserve027", (int64)EBasicWrestlerIntParamType::Reserve027 },
				{ "EBasicWrestlerIntParamType::Reserve028", (int64)EBasicWrestlerIntParamType::Reserve028 },
				{ "EBasicWrestlerIntParamType::Reserve029", (int64)EBasicWrestlerIntParamType::Reserve029 },
				{ "EBasicWrestlerIntParamType::Reserve030", (int64)EBasicWrestlerIntParamType::Reserve030 },
				{ "EBasicWrestlerIntParamType::Reserve031", (int64)EBasicWrestlerIntParamType::Reserve031 },
				{ "EBasicWrestlerIntParamType::Reserve032", (int64)EBasicWrestlerIntParamType::Reserve032 },
				{ "EBasicWrestlerIntParamType::Reserve033", (int64)EBasicWrestlerIntParamType::Reserve033 },
				{ "EBasicWrestlerIntParamType::Reserve034", (int64)EBasicWrestlerIntParamType::Reserve034 },
				{ "EBasicWrestlerIntParamType::Reserve035", (int64)EBasicWrestlerIntParamType::Reserve035 },
				{ "EBasicWrestlerIntParamType::Reserve036", (int64)EBasicWrestlerIntParamType::Reserve036 },
				{ "EBasicWrestlerIntParamType::Reserve037", (int64)EBasicWrestlerIntParamType::Reserve037 },
				{ "EBasicWrestlerIntParamType::Reserve038", (int64)EBasicWrestlerIntParamType::Reserve038 },
				{ "EBasicWrestlerIntParamType::Reserve039", (int64)EBasicWrestlerIntParamType::Reserve039 },
				{ "EBasicWrestlerIntParamType::Reserve040", (int64)EBasicWrestlerIntParamType::Reserve040 },
				{ "EBasicWrestlerIntParamType::Reserve041", (int64)EBasicWrestlerIntParamType::Reserve041 },
				{ "EBasicWrestlerIntParamType::Reserve042", (int64)EBasicWrestlerIntParamType::Reserve042 },
				{ "EBasicWrestlerIntParamType::Reserve043", (int64)EBasicWrestlerIntParamType::Reserve043 },
				{ "EBasicWrestlerIntParamType::Reserve044", (int64)EBasicWrestlerIntParamType::Reserve044 },
				{ "EBasicWrestlerIntParamType::Reserve045", (int64)EBasicWrestlerIntParamType::Reserve045 },
				{ "EBasicWrestlerIntParamType::Reserve046", (int64)EBasicWrestlerIntParamType::Reserve046 },
				{ "EBasicWrestlerIntParamType::Reserve047", (int64)EBasicWrestlerIntParamType::Reserve047 },
				{ "EBasicWrestlerIntParamType::Reserve048", (int64)EBasicWrestlerIntParamType::Reserve048 },
				{ "EBasicWrestlerIntParamType::Reserve049", (int64)EBasicWrestlerIntParamType::Reserve049 },
				{ "EBasicWrestlerIntParamType::Num", (int64)EBasicWrestlerIntParamType::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BirthDay.Name", "EBasicWrestlerIntParamType::BirthDay" },
				{ "BirthMonth.Name", "EBasicWrestlerIntParamType::BirthMonth" },
				{ "BlueprintType", "true" },
				{ "BodyFat.Name", "EBasicWrestlerIntParamType::BodyFat" },
				{ "BodyHeight.Name", "EBasicWrestlerIntParamType::BodyHeight" },
				{ "BodyHeightType.Name", "EBasicWrestlerIntParamType::BodyHeightType" },
				{ "BodyMuscle.Name", "EBasicWrestlerIntParamType::BodyMuscle" },
				{ "BodyType.Name", "EBasicWrestlerIntParamType::BodyType" },
				{ "BodyWeightType.Name", "EBasicWrestlerIntParamType::BodyWeightType" },
				{ "FaceType.Name", "EBasicWrestlerIntParamType::FaceType" },
				{ "FanReaction.Name", "EBasicWrestlerIntParamType::FanReaction" },
				{ "FavoriteProps.Name", "EBasicWrestlerIntParamType::FavoriteProps" },
				{ "FightStyle.Name", "EBasicWrestlerIntParamType::FightStyle" },
				{ "Gender.Name", "EBasicWrestlerIntParamType::Gender" },
				{ "Height.Name", "EBasicWrestlerIntParamType::Height" },
				{ "HomeTownID.Name", "EBasicWrestlerIntParamType::HomeTownID" },
				{ "LeftEyeType.Name", "EBasicWrestlerIntParamType::LeftEyeType" },
				{ "ModuleRelativePath", "Public/EBasicWrestlerIntParamType.h" },
				{ "Num.Name", "EBasicWrestlerIntParamType::Num" },
				{ "Reserve024.Name", "EBasicWrestlerIntParamType::Reserve024" },
				{ "Reserve025.Name", "EBasicWrestlerIntParamType::Reserve025" },
				{ "Reserve026.Name", "EBasicWrestlerIntParamType::Reserve026" },
				{ "Reserve027.Name", "EBasicWrestlerIntParamType::Reserve027" },
				{ "Reserve028.Name", "EBasicWrestlerIntParamType::Reserve028" },
				{ "Reserve029.Name", "EBasicWrestlerIntParamType::Reserve029" },
				{ "Reserve030.Name", "EBasicWrestlerIntParamType::Reserve030" },
				{ "Reserve031.Name", "EBasicWrestlerIntParamType::Reserve031" },
				{ "Reserve032.Name", "EBasicWrestlerIntParamType::Reserve032" },
				{ "Reserve033.Name", "EBasicWrestlerIntParamType::Reserve033" },
				{ "Reserve034.Name", "EBasicWrestlerIntParamType::Reserve034" },
				{ "Reserve035.Name", "EBasicWrestlerIntParamType::Reserve035" },
				{ "Reserve036.Name", "EBasicWrestlerIntParamType::Reserve036" },
				{ "Reserve037.Name", "EBasicWrestlerIntParamType::Reserve037" },
				{ "Reserve038.Name", "EBasicWrestlerIntParamType::Reserve038" },
				{ "Reserve039.Name", "EBasicWrestlerIntParamType::Reserve039" },
				{ "Reserve040.Name", "EBasicWrestlerIntParamType::Reserve040" },
				{ "Reserve041.Name", "EBasicWrestlerIntParamType::Reserve041" },
				{ "Reserve042.Name", "EBasicWrestlerIntParamType::Reserve042" },
				{ "Reserve043.Name", "EBasicWrestlerIntParamType::Reserve043" },
				{ "Reserve044.Name", "EBasicWrestlerIntParamType::Reserve044" },
				{ "Reserve045.Name", "EBasicWrestlerIntParamType::Reserve045" },
				{ "Reserve046.Name", "EBasicWrestlerIntParamType::Reserve046" },
				{ "Reserve047.Name", "EBasicWrestlerIntParamType::Reserve047" },
				{ "Reserve048.Name", "EBasicWrestlerIntParamType::Reserve048" },
				{ "Reserve049.Name", "EBasicWrestlerIntParamType::Reserve049" },
				{ "RightEyeType.Name", "EBasicWrestlerIntParamType::RightEyeType" },
				{ "RingAnnounce1.Name", "EBasicWrestlerIntParamType::RingAnnounce1" },
				{ "RingAnnounce2.Name", "EBasicWrestlerIntParamType::RingAnnounce2" },
				{ "RingAnnounce3.Name", "EBasicWrestlerIntParamType::RingAnnounce3" },
				{ "SkinColorID.Name", "EBasicWrestlerIntParamType::SkinColorID" },
				{ "VoiceType.Name", "EBasicWrestlerIntParamType::VoiceType" },
				{ "Weight.Name", "EBasicWrestlerIntParamType::Weight" },
				{ "WrestlerID.Name", "EBasicWrestlerIntParamType::WrestlerID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EBasicWrestlerIntParamType",
				"EBasicWrestlerIntParamType",
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
