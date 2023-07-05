// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPopupNotificationUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPopupNotificationUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPopupNotificationUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPopupNotificationUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType();
// End Cross Module References
	DEFINE_FUNCTION(UELPopupNotificationUtilityFunction::execRequestPopup_ChallengeCompleted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__challengeId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPopupNotificationUtilityFunction::RequestPopup_ChallengeCompleted(Z_Param__challengeId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationUtilityFunction::execRequestPopup_ChatMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__userName);
		P_GET_PROPERTY(FStrProperty,Z_Param__dispMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPopupNotificationUtilityFunction::RequestPopup_ChatMessage(Z_Param__userName,Z_Param__dispMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPopupNotificationUtilityFunction::execRequestPopup_Online)
	{
		P_GET_ENUM(EPopupOnlineStatusType,Z_Param__statusType);
		P_GET_PROPERTY(FStrProperty,Z_Param__execUserName);
		P_GET_TARRAY(FString,Z_Param__targetUserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELPopupNotificationUtilityFunction::RequestPopup_Online(EPopupOnlineStatusType(Z_Param__statusType),Z_Param__execUserName,Z_Param__targetUserName);
		P_NATIVE_END;
	}
	void UELPopupNotificationUtilityFunction::StaticRegisterNativesUELPopupNotificationUtilityFunction()
	{
		UClass* Class = UELPopupNotificationUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestPopup_ChallengeCompleted", &UELPopupNotificationUtilityFunction::execRequestPopup_ChallengeCompleted },
			{ "RequestPopup_ChatMessage", &UELPopupNotificationUtilityFunction::execRequestPopup_ChatMessage },
			{ "RequestPopup_Online", &UELPopupNotificationUtilityFunction::execRequestPopup_Online },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics
	{
		struct ELPopupNotificationUtilityFunction_eventRequestPopup_ChallengeCompleted_Parms
		{
			int32 _challengeId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__challengeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::NewProp__challengeId = { "_challengeId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_ChallengeCompleted_Parms, _challengeId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::NewProp__challengeId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationUtilityFunction, nullptr, "RequestPopup_ChallengeCompleted", nullptr, nullptr, sizeof(ELPopupNotificationUtilityFunction_eventRequestPopup_ChallengeCompleted_Parms), Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics
	{
		struct ELPopupNotificationUtilityFunction_eventRequestPopup_ChatMessage_Parms
		{
			FString _userName;
			FString _dispMessage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__userName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__userName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dispMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__dispMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__userName = { "_userName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_ChatMessage_Parms, _userName), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__userName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__dispMessage = { "_dispMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_ChatMessage_Parms, _dispMessage), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__dispMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__userName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::NewProp__dispMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationUtilityFunction, nullptr, "RequestPopup_ChatMessage", nullptr, nullptr, sizeof(ELPopupNotificationUtilityFunction_eventRequestPopup_ChatMessage_Parms), Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics
	{
		struct ELPopupNotificationUtilityFunction_eventRequestPopup_Online_Parms
		{
			EPopupOnlineStatusType _statusType;
			FString _execUserName;
			TArray<FString> _targetUserName;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__statusType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__statusType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__execUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__execUserName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__targetUserName_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetUserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__statusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__statusType = { "_statusType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_Online_Parms, _statusType), Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__execUserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__execUserName = { "_execUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_Online_Parms, _execUserName), METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__execUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__execUserName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__targetUserName_Inner = { "_targetUserName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__targetUserName = { "_targetUserName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPopupNotificationUtilityFunction_eventRequestPopup_Online_Parms, _targetUserName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__statusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__statusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__execUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__targetUserName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::NewProp__targetUserName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPopupNotificationUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPopupNotificationUtilityFunction, nullptr, "RequestPopup_Online", nullptr, nullptr, sizeof(ELPopupNotificationUtilityFunction_eventRequestPopup_Online_Parms), Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPopupNotificationUtilityFunction_NoRegister()
	{
		return UELPopupNotificationUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChallengeCompleted, "RequestPopup_ChallengeCompleted" }, // 3454782706
		{ &Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_ChatMessage, "RequestPopup_ChatMessage" }, // 2659300900
		{ &Z_Construct_UFunction_UELPopupNotificationUtilityFunction_RequestPopup_Online, "RequestPopup_Online" }, // 2549008448
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPopupNotificationUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPopupNotificationUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPopupNotificationUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::ClassParams = {
		&UELPopupNotificationUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPopupNotificationUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPopupNotificationUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPopupNotificationUtilityFunction, 604392740);
	template<> ABP_200508_API UClass* StaticClass<UELPopupNotificationUtilityFunction>()
	{
		return UELPopupNotificationUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPopupNotificationUtilityFunction(Z_Construct_UClass_UELPopupNotificationUtilityFunction, &UELPopupNotificationUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPopupNotificationUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPopupNotificationUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
