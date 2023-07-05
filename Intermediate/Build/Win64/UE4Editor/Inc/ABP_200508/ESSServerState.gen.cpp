// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSServerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSServerState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSServerState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSServerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSServerState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSServerState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSServerState>()
	{
		return ESSServerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSServerState(ESSServerState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSServerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSServerState_Hash() { return 2527640736U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSServerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSServerState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSServerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSServerState::None", (int64)ESSServerState::None },
				{ "ESSServerState::Initialize", (int64)ESSServerState::Initialize },
				{ "ESSServerState::DownloadTitleStorage", (int64)ESSServerState::DownloadTitleStorage },
				{ "ESSServerState::WaitStartGameSession", (int64)ESSServerState::WaitStartGameSession },
				{ "ESSServerState::DataLoading", (int64)ESSServerState::DataLoading },
				{ "ESSServerState::Matching", (int64)ESSServerState::Matching },
				{ "ESSServerState::WaitSpawnClientActor", (int64)ESSServerState::WaitSpawnClientActor },
				{ "ESSServerState::InProgress", (int64)ESSServerState::InProgress },
				{ "ESSServerState::Closing", (int64)ESSServerState::Closing },
				{ "ESSServerState::Exit", (int64)ESSServerState::Exit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closing.Name", "ESSServerState::Closing" },
				{ "DataLoading.Name", "ESSServerState::DataLoading" },
				{ "DownloadTitleStorage.Name", "ESSServerState::DownloadTitleStorage" },
				{ "Exit.Name", "ESSServerState::Exit" },
				{ "Initialize.Name", "ESSServerState::Initialize" },
				{ "InProgress.Name", "ESSServerState::InProgress" },
				{ "Matching.Name", "ESSServerState::Matching" },
				{ "ModuleRelativePath", "Public/ESSServerState.h" },
				{ "None.Name", "ESSServerState::None" },
				{ "WaitSpawnClientActor.Name", "ESSServerState::WaitSpawnClientActor" },
				{ "WaitStartGameSession.Name", "ESSServerState::WaitStartGameSession" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSServerState",
				"ESSServerState",
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
