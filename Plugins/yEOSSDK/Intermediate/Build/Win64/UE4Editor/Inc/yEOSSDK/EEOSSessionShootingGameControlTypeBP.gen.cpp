// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionShootingGameControlTypeBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionShootingGameControlTypeBP() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionShootingGameControlTypeBP();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionShootingGameControlTypeBP_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionShootingGameControlTypeBP, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionShootingGameControlTypeBP"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionShootingGameControlTypeBP>()
	{
		return EEOSSessionShootingGameControlTypeBP_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionShootingGameControlTypeBP(EEOSSessionShootingGameControlTypeBP_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionShootingGameControlTypeBP"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionShootingGameControlTypeBP_Hash() { return 779563037U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionShootingGameControlTypeBP()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionShootingGameControlTypeBP"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionShootingGameControlTypeBP_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionShootingGameControlTypeBP::MoveFB", (int64)EEOSSessionShootingGameControlTypeBP::MoveFB },
				{ "EEOSSessionShootingGameControlTypeBP::MoveLR", (int64)EEOSSessionShootingGameControlTypeBP::MoveLR },
				{ "EEOSSessionShootingGameControlTypeBP::Run", (int64)EEOSSessionShootingGameControlTypeBP::Run },
				{ "EEOSSessionShootingGameControlTypeBP::Slow", (int64)EEOSSessionShootingGameControlTypeBP::Slow },
				{ "EEOSSessionShootingGameControlTypeBP::Step", (int64)EEOSSessionShootingGameControlTypeBP::Step },
				{ "EEOSSessionShootingGameControlTypeBP::Jump", (int64)EEOSSessionShootingGameControlTypeBP::Jump },
				{ "EEOSSessionShootingGameControlTypeBP::Crouch", (int64)EEOSSessionShootingGameControlTypeBP::Crouch },
				{ "EEOSSessionShootingGameControlTypeBP::Crawl", (int64)EEOSSessionShootingGameControlTypeBP::Crawl },
				{ "EEOSSessionShootingGameControlTypeBP::Turn", (int64)EEOSSessionShootingGameControlTypeBP::Turn },
				{ "EEOSSessionShootingGameControlTypeBP::Down", (int64)EEOSSessionShootingGameControlTypeBP::Down },
				{ "EEOSSessionShootingGameControlTypeBP::Getup", (int64)EEOSSessionShootingGameControlTypeBP::Getup },
				{ "EEOSSessionShootingGameControlTypeBP::Hide", (int64)EEOSSessionShootingGameControlTypeBP::Hide },
				{ "EEOSSessionShootingGameControlTypeBP::Attack", (int64)EEOSSessionShootingGameControlTypeBP::Attack },
				{ "EEOSSessionShootingGameControlTypeBP::Shoot", (int64)EEOSSessionShootingGameControlTypeBP::Shoot },
				{ "EEOSSessionShootingGameControlTypeBP::Guard", (int64)EEOSSessionShootingGameControlTypeBP::Guard },
				{ "EEOSSessionShootingGameControlTypeBP::Barrier", (int64)EEOSSessionShootingGameControlTypeBP::Barrier },
				{ "EEOSSessionShootingGameControlTypeBP::Action", (int64)EEOSSessionShootingGameControlTypeBP::Action },
				{ "EEOSSessionShootingGameControlTypeBP::PickUp", (int64)EEOSSessionShootingGameControlTypeBP::PickUp },
				{ "EEOSSessionShootingGameControlTypeBP::Throw", (int64)EEOSSessionShootingGameControlTypeBP::Throw },
				{ "EEOSSessionShootingGameControlTypeBP::Reload", (int64)EEOSSessionShootingGameControlTypeBP::Reload },
				{ "EEOSSessionShootingGameControlTypeBP::GetOn", (int64)EEOSSessionShootingGameControlTypeBP::GetOn },
				{ "EEOSSessionShootingGameControlTypeBP::GetOff", (int64)EEOSSessionShootingGameControlTypeBP::GetOff },
				{ "EEOSSessionShootingGameControlTypeBP::Max", (int64)EEOSSessionShootingGameControlTypeBP::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Action.Name", "EEOSSessionShootingGameControlTypeBP::Action" },
				{ "Attack.Name", "EEOSSessionShootingGameControlTypeBP::Attack" },
				{ "Barrier.Name", "EEOSSessionShootingGameControlTypeBP::Barrier" },
				{ "BlueprintType", "true" },
				{ "Crawl.Name", "EEOSSessionShootingGameControlTypeBP::Crawl" },
				{ "Crouch.Name", "EEOSSessionShootingGameControlTypeBP::Crouch" },
				{ "Down.Name", "EEOSSessionShootingGameControlTypeBP::Down" },
				{ "GetOff.Name", "EEOSSessionShootingGameControlTypeBP::GetOff" },
				{ "GetOn.Name", "EEOSSessionShootingGameControlTypeBP::GetOn" },
				{ "Getup.Name", "EEOSSessionShootingGameControlTypeBP::Getup" },
				{ "Guard.Name", "EEOSSessionShootingGameControlTypeBP::Guard" },
				{ "Hide.Name", "EEOSSessionShootingGameControlTypeBP::Hide" },
				{ "Jump.Name", "EEOSSessionShootingGameControlTypeBP::Jump" },
				{ "Max.Name", "EEOSSessionShootingGameControlTypeBP::Max" },
				{ "ModuleRelativePath", "Public/EEOSSessionShootingGameControlTypeBP.h" },
				{ "MoveFB.Name", "EEOSSessionShootingGameControlTypeBP::MoveFB" },
				{ "MoveLR.Name", "EEOSSessionShootingGameControlTypeBP::MoveLR" },
				{ "PickUp.Name", "EEOSSessionShootingGameControlTypeBP::PickUp" },
				{ "Reload.Name", "EEOSSessionShootingGameControlTypeBP::Reload" },
				{ "Run.Name", "EEOSSessionShootingGameControlTypeBP::Run" },
				{ "Shoot.Name", "EEOSSessionShootingGameControlTypeBP::Shoot" },
				{ "Slow.Name", "EEOSSessionShootingGameControlTypeBP::Slow" },
				{ "Step.Name", "EEOSSessionShootingGameControlTypeBP::Step" },
				{ "Throw.Name", "EEOSSessionShootingGameControlTypeBP::Throw" },
				{ "Turn.Name", "EEOSSessionShootingGameControlTypeBP::Turn" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionShootingGameControlTypeBP",
				"EEOSSessionShootingGameControlTypeBP",
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
