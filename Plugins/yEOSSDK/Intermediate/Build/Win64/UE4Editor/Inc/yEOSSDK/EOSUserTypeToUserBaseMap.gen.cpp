// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserTypeToUserBaseMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserTypeToUserBaseMap() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserTypeToUserBaseMap_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserTypeToUserBaseMap();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserType();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserTypeToUserBaseMap::execGetUserMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<EEOSUserType,UEOSUserBase*>*)Z_Param__Result=P_THIS->GetUserMap();
		P_NATIVE_END;
	}
	void UEOSUserTypeToUserBaseMap::StaticRegisterNativesUEOSUserTypeToUserBaseMap()
	{
		UClass* Class = UEOSUserTypeToUserBaseMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserMap", &UEOSUserTypeToUserBaseMap::execGetUserMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics
	{
		struct EOSUserTypeToUserBaseMap_eventGetUserMap_Parms
		{
			TMap<EEOSUserType,UEOSUserBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserTypeToUserBaseMap_eventGetUserMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserTypeToUserBaseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserTypeToUserBaseMap, nullptr, "GetUserMap", nullptr, nullptr, sizeof(EOSUserTypeToUserBaseMap_eventGetUserMap_Parms), Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserTypeToUserBaseMap_NoRegister()
	{
		return UEOSUserTypeToUserBaseMap::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUserTypeMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cUserTypeMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_cUserTypeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUserTypeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cUserTypeMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserTypeToUserBaseMap_GetUserMap, "GetUserMap" }, // 1509354868
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserTypeToUserBaseMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserTypeToUserBaseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_ValueProp = { "m_cUserTypeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_Key_KeyProp = { "m_cUserTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_yEOSSDK_EEOSUserType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserTypeToUserBaseMap" },
		{ "ModuleRelativePath", "Public/EOSUserTypeToUserBaseMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap = { "m_cUserTypeMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserTypeToUserBaseMap, m_cUserTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::NewProp_m_cUserTypeMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserTypeToUserBaseMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::ClassParams = {
		&UEOSUserTypeToUserBaseMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserTypeToUserBaseMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserTypeToUserBaseMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserTypeToUserBaseMap, 1787663792);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserTypeToUserBaseMap>()
	{
		return UEOSUserTypeToUserBaseMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserTypeToUserBaseMap(Z_Construct_UClass_UEOSUserTypeToUserBaseMap, &UEOSUserTypeToUserBaseMap::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserTypeToUserBaseMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserTypeToUserBaseMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
