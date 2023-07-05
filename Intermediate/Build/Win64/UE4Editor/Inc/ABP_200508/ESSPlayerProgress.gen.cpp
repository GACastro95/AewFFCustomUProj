// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSPlayerProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSPlayerProgress() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerProgress();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSPlayerProgress_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSPlayerProgress, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSPlayerProgress"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerProgress>()
	{
		return ESSPlayerProgress_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSPlayerProgress(ESSPlayerProgress_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSPlayerProgress"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSPlayerProgress_Hash() { return 1017022003U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSPlayerProgress()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSPlayerProgress"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSPlayerProgress_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSPlayerProgress::Nothing", (int64)ESSPlayerProgress::Nothing },
				{ "ESSPlayerProgress::DoneHotPlayerSetup", (int64)ESSPlayerProgress::DoneHotPlayerSetup },
				{ "ESSPlayerProgress::DoneLobby", (int64)ESSPlayerProgress::DoneLobby },
				{ "ESSPlayerProgress::DoneMatchPointPay", (int64)ESSPlayerProgress::DoneMatchPointPay },
				{ "ESSPlayerProgress::DoneUIPrepare", (int64)ESSPlayerProgress::DoneUIPrepare },
				{ "ESSPlayerProgress::DoneOpenGamePlayScreen", (int64)ESSPlayerProgress::DoneOpenGamePlayScreen },
				{ "ESSPlayerProgress::DoneDescription", (int64)ESSPlayerProgress::DoneDescription },
				{ "ESSPlayerProgress::DoneActorSpawned", (int64)ESSPlayerProgress::DoneActorSpawned },
				{ "ESSPlayerProgress::ReadyToNext_FromLoading", (int64)ESSPlayerProgress::ReadyToNext_FromLoading },
				{ "ESSPlayerProgress::ReadyToNext_FromSetup", (int64)ESSPlayerProgress::ReadyToNext_FromSetup },
				{ "ESSPlayerProgress::ReadyToNext_FromEntrance", (int64)ESSPlayerProgress::ReadyToNext_FromEntrance },
				{ "ESSPlayerProgress::ReadyToNext_FromOpenGamePlayScreen", (int64)ESSPlayerProgress::ReadyToNext_FromOpenGamePlayScreen },
				{ "ESSPlayerProgress::ReadyToNext_FromDescription", (int64)ESSPlayerProgress::ReadyToNext_FromDescription },
				{ "ESSPlayerProgress::NotifiedFromServer_Dead", (int64)ESSPlayerProgress::NotifiedFromServer_Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DoneActorSpawned.Name", "ESSPlayerProgress::DoneActorSpawned" },
				{ "DoneDescription.Name", "ESSPlayerProgress::DoneDescription" },
				{ "DoneHotPlayerSetup.Name", "ESSPlayerProgress::DoneHotPlayerSetup" },
				{ "DoneLobby.Name", "ESSPlayerProgress::DoneLobby" },
				{ "DoneMatchPointPay.Name", "ESSPlayerProgress::DoneMatchPointPay" },
				{ "DoneOpenGamePlayScreen.Name", "ESSPlayerProgress::DoneOpenGamePlayScreen" },
				{ "DoneUIPrepare.Name", "ESSPlayerProgress::DoneUIPrepare" },
				{ "ModuleRelativePath", "Public/ESSPlayerProgress.h" },
				{ "Nothing.Name", "ESSPlayerProgress::Nothing" },
				{ "NotifiedFromServer_Dead.Name", "ESSPlayerProgress::NotifiedFromServer_Dead" },
				{ "ReadyToNext_FromDescription.Name", "ESSPlayerProgress::ReadyToNext_FromDescription" },
				{ "ReadyToNext_FromEntrance.Name", "ESSPlayerProgress::ReadyToNext_FromEntrance" },
				{ "ReadyToNext_FromLoading.Name", "ESSPlayerProgress::ReadyToNext_FromLoading" },
				{ "ReadyToNext_FromOpenGamePlayScreen.Name", "ESSPlayerProgress::ReadyToNext_FromOpenGamePlayScreen" },
				{ "ReadyToNext_FromSetup.Name", "ESSPlayerProgress::ReadyToNext_FromSetup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSPlayerProgress",
				"ESSPlayerProgress",
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
