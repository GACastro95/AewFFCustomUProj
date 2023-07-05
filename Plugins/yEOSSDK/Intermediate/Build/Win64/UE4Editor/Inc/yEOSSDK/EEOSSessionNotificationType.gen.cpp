// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionNotificationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionNotificationType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionNotificationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionNotificationType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionNotificationType>()
	{
		return EEOSSessionNotificationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionNotificationType(EEOSSessionNotificationType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionNotificationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType_Hash() { return 3645652505U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionNotificationType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionNotificationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionNotificationType::UpdateReceived", (int64)EEOSSessionNotificationType::UpdateReceived },
				{ "EEOSSessionNotificationType::MemberUpdateReceived", (int64)EEOSSessionNotificationType::MemberUpdateReceived },
				{ "EEOSSessionNotificationType::UpdateMemberDescription", (int64)EEOSSessionNotificationType::UpdateMemberDescription },
				{ "EEOSSessionNotificationType::SesionGameStarted", (int64)EEOSSessionNotificationType::SesionGameStarted },
				{ "EEOSSessionNotificationType::SesionGameEnded", (int64)EEOSSessionNotificationType::SesionGameEnded },
				{ "EEOSSessionNotificationType::Accepted", (int64)EEOSSessionNotificationType::Accepted },
				{ "EEOSSessionNotificationType::Blocked", (int64)EEOSSessionNotificationType::Blocked },
				{ "EEOSSessionNotificationType::SessionFull", (int64)EEOSSessionNotificationType::SessionFull },
				{ "EEOSSessionNotificationType::SessionAlreadyStarted", (int64)EEOSSessionNotificationType::SessionAlreadyStarted },
				{ "EEOSSessionNotificationType::SessionAlreadyEnded", (int64)EEOSSessionNotificationType::SessionAlreadyEnded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Accepted.Name", "EEOSSessionNotificationType::Accepted" },
				{ "Blocked.Name", "EEOSSessionNotificationType::Blocked" },
				{ "BlueprintType", "true" },
				{ "MemberUpdateReceived.Name", "EEOSSessionNotificationType::MemberUpdateReceived" },
				{ "ModuleRelativePath", "Public/EEOSSessionNotificationType.h" },
				{ "SesionGameEnded.Name", "EEOSSessionNotificationType::SesionGameEnded" },
				{ "SesionGameStarted.Name", "EEOSSessionNotificationType::SesionGameStarted" },
				{ "SessionAlreadyEnded.Name", "EEOSSessionNotificationType::SessionAlreadyEnded" },
				{ "SessionAlreadyStarted.Name", "EEOSSessionNotificationType::SessionAlreadyStarted" },
				{ "SessionFull.Name", "EEOSSessionNotificationType::SessionFull" },
				{ "UpdateMemberDescription.Name", "EEOSSessionNotificationType::UpdateMemberDescription" },
				{ "UpdateReceived.Name", "EEOSSessionNotificationType::UpdateReceived" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionNotificationType",
				"EEOSSessionNotificationType",
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
