// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GLAPI_DescribeGameSessionPlace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLAPI_DescribeGameSessionPlace() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus();
	ABP_200508_API UClass* Z_Construct_UClass_UGameLiftClientObject_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionPlacementSuccess__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionPlacementFailed__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGLAPI_DescribeGameSessionPlace::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameLiftActivateStatus*)Z_Param__Result=P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGLAPI_DescribeGameSessionPlace::execDescribeGameSessionPlacementAPI)
	{
		P_GET_OBJECT(UGameLiftClientObject,Z_Param_client);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameSessionPlacementId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGLAPI_DescribeGameSessionPlace**)Z_Param__Result=UGLAPI_DescribeGameSessionPlace::DescribeGameSessionPlacementAPI(Z_Param_client,Z_Param_GameSessionPlacementId);
		P_NATIVE_END;
	}
	void UGLAPI_DescribeGameSessionPlace::StaticRegisterNativesUGLAPI_DescribeGameSessionPlace()
	{
		UClass* Class = UGLAPI_DescribeGameSessionPlace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UGLAPI_DescribeGameSessionPlace::execActivate },
			{ "DescribeGameSessionPlacementAPI", &UGLAPI_DescribeGameSessionPlace::execDescribeGameSessionPlacementAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics
	{
		struct GLAPI_DescribeGameSessionPlace_eventActivate_Parms
		{
			EGameLiftActivateStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionPlace_eventActivate_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EGameLiftActivateStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace, nullptr, "Activate", nullptr, nullptr, sizeof(GLAPI_DescribeGameSessionPlace_eventActivate_Parms), Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics
	{
		struct GLAPI_DescribeGameSessionPlace_eventDescribeGameSessionPlacementAPI_Parms
		{
			UGameLiftClientObject* client;
			FString GameSessionPlacementId;
			UGLAPI_DescribeGameSessionPlace* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_client;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameSessionPlacementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameSessionPlacementId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_client = { "client", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionPlace_eventDescribeGameSessionPlacementAPI_Parms, client), Z_Construct_UClass_UGameLiftClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_GameSessionPlacementId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_GameSessionPlacementId = { "GameSessionPlacementId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionPlace_eventDescribeGameSessionPlacementAPI_Parms, GameSessionPlacementId), METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_GameSessionPlacementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_GameSessionPlacementId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GLAPI_DescribeGameSessionPlace_eventDescribeGameSessionPlacementAPI_Parms, ReturnValue), Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_client,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_GameSessionPlacementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace, nullptr, "DescribeGameSessionPlacementAPI", nullptr, nullptr, sizeof(GLAPI_DescribeGameSessionPlace_eventDescribeGameSessionPlacementAPI_Parms), Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_NoRegister()
	{
		return UGLAPI_DescribeGameSessionPlace::StaticClass();
	}
	struct Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_Activate, "Activate" }, // 2702346476
		{ &Z_Construct_UFunction_UGLAPI_DescribeGameSessionPlace_DescribeGameSessionPlacementAPI, "DescribeGameSessionPlacementAPI" }, // 3225779518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GLAPI_DescribeGameSessionPlace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionPlace.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribeGameSessionPlace" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribeGameSessionPlace, OnSuccess), Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionPlacementSuccess__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnFailed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GLAPI_DescribeGameSessionPlace" },
		{ "ModuleRelativePath", "Public/GLAPI_DescribeGameSessionPlace.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGLAPI_DescribeGameSessionPlace, OnFailed), Z_Construct_UDelegateFunction_ABP_200508_OnDescribeGameSessionPlacementFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnFailed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::NewProp_OnFailed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLAPI_DescribeGameSessionPlace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::ClassParams = {
		&UGLAPI_DescribeGameSessionPlace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGLAPI_DescribeGameSessionPlace, 3787864913);
	template<> ABP_200508_API UClass* StaticClass<UGLAPI_DescribeGameSessionPlace>()
	{
		return UGLAPI_DescribeGameSessionPlace::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGLAPI_DescribeGameSessionPlace(Z_Construct_UClass_UGLAPI_DescribeGameSessionPlace, &UGLAPI_DescribeGameSessionPlace::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGLAPI_DescribeGameSessionPlace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLAPI_DescribeGameSessionPlace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
