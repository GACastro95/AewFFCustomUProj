// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EAnimPoseType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnimPoseType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAnimPoseType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EAnimPoseType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EAnimPoseType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EAnimPoseType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EAnimPoseType>()
	{
		return EAnimPoseType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimPoseType(EAnimPoseType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EAnimPoseType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EAnimPoseType_Hash() { return 4135625600U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EAnimPoseType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimPoseType"), 0, Get_Z_Construct_UEnum_ABP_200508_EAnimPoseType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimPoseType::None", (int64)EAnimPoseType::None },
				{ "EAnimPoseType::Stand", (int64)EAnimPoseType::Stand },
				{ "EAnimPoseType::Walk", (int64)EAnimPoseType::Walk },
				{ "EAnimPoseType::Run", (int64)EAnimPoseType::Run },
				{ "EAnimPoseType::FaceUp", (int64)EAnimPoseType::FaceUp },
				{ "EAnimPoseType::FaceDown", (int64)EAnimPoseType::FaceDown },
				{ "EAnimPoseType::Groggy", (int64)EAnimPoseType::Groggy },
				{ "EAnimPoseType::CornerGroggyFront", (int64)EAnimPoseType::CornerGroggyFront },
				{ "EAnimPoseType::CornerGroggyRear", (int64)EAnimPoseType::CornerGroggyRear },
				{ "EAnimPoseType::TreeOfWoe", (int64)EAnimPoseType::TreeOfWoe },
				{ "EAnimPoseType::RopeGroggy", (int64)EAnimPoseType::RopeGroggy },
				{ "EAnimPoseType::MiddleRope", (int64)EAnimPoseType::MiddleRope },
				{ "EAnimPoseType::ApronStand", (int64)EAnimPoseType::ApronStand },
				{ "EAnimPoseType::ApronGroggy", (int64)EAnimPoseType::ApronGroggy },
				{ "EAnimPoseType::CornerTopWait", (int64)EAnimPoseType::CornerTopWait },
				{ "EAnimPoseType::StandUp", (int64)EAnimPoseType::StandUp },
				{ "EAnimPoseType::Whip", (int64)EAnimPoseType::Whip },
				{ "EAnimPoseType::SitDown", (int64)EAnimPoseType::SitDown },
				{ "EAnimPoseType::FenceDown", (int64)EAnimPoseType::FenceDown },
				{ "EAnimPoseType::FenceSit", (int64)EAnimPoseType::FenceSit },
				{ "EAnimPoseType::AirDamage", (int64)EAnimPoseType::AirDamage },
				{ "EAnimPoseType::StandUpFU", (int64)EAnimPoseType::StandUpFU },
				{ "EAnimPoseType::StandUpFD", (int64)EAnimPoseType::StandUpFD },
				{ "EAnimPoseType::Table", (int64)EAnimPoseType::Table },
				{ "EAnimPoseType::Ladder", (int64)EAnimPoseType::Ladder },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AirDamage.Name", "EAnimPoseType::AirDamage" },
				{ "ApronGroggy.Name", "EAnimPoseType::ApronGroggy" },
				{ "ApronStand.Name", "EAnimPoseType::ApronStand" },
				{ "BlueprintType", "true" },
				{ "CornerGroggyFront.Name", "EAnimPoseType::CornerGroggyFront" },
				{ "CornerGroggyRear.Name", "EAnimPoseType::CornerGroggyRear" },
				{ "CornerTopWait.Name", "EAnimPoseType::CornerTopWait" },
				{ "FaceDown.Name", "EAnimPoseType::FaceDown" },
				{ "FaceUp.Name", "EAnimPoseType::FaceUp" },
				{ "FenceDown.Name", "EAnimPoseType::FenceDown" },
				{ "FenceSit.Name", "EAnimPoseType::FenceSit" },
				{ "Groggy.Name", "EAnimPoseType::Groggy" },
				{ "Ladder.Name", "EAnimPoseType::Ladder" },
				{ "MiddleRope.Name", "EAnimPoseType::MiddleRope" },
				{ "ModuleRelativePath", "Public/EAnimPoseType.h" },
				{ "None.Name", "EAnimPoseType::None" },
				{ "RopeGroggy.Name", "EAnimPoseType::RopeGroggy" },
				{ "Run.Name", "EAnimPoseType::Run" },
				{ "SitDown.Name", "EAnimPoseType::SitDown" },
				{ "Stand.Name", "EAnimPoseType::Stand" },
				{ "StandUp.Name", "EAnimPoseType::StandUp" },
				{ "StandUpFD.Name", "EAnimPoseType::StandUpFD" },
				{ "StandUpFU.Name", "EAnimPoseType::StandUpFU" },
				{ "Table.Name", "EAnimPoseType::Table" },
				{ "TreeOfWoe.Name", "EAnimPoseType::TreeOfWoe" },
				{ "Walk.Name", "EAnimPoseType::Walk" },
				{ "Whip.Name", "EAnimPoseType::Whip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EAnimPoseType",
				"EAnimPoseType",
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
