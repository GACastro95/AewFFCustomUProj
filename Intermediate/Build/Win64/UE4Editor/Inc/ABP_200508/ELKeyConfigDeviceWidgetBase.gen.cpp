// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELKeyConfigDeviceWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELKeyConfigDeviceWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigDeviceWidgetBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType();
	ABP_200508_API UClass* Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELKeyConfigDeviceWidgetBase::execGetDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKeyConfigDeviceType*)Z_Param__Result=P_THIS->GetDeviceType();
		P_NATIVE_END;
	}
	void UELKeyConfigDeviceWidgetBase::StaticRegisterNativesUELKeyConfigDeviceWidgetBase()
	{
		UClass* Class = UELKeyConfigDeviceWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeviceType", &UELKeyConfigDeviceWidgetBase::execGetDeviceType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics
	{
		struct ELKeyConfigDeviceWidgetBase_eventGetDeviceType_Parms
		{
			EKeyConfigDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELKeyConfigDeviceWidgetBase_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELKeyConfigDeviceWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELKeyConfigDeviceWidgetBase, nullptr, "GetDeviceType", nullptr, nullptr, sizeof(ELKeyConfigDeviceWidgetBase_eventGetDeviceType_Parms), Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_NoRegister()
	{
		return UELKeyConfigDeviceWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_DeviceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DeviceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_DeviceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELKeyConfigDeviceWidgetBase_GetDeviceType, "GetDeviceType" }, // 574338965
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELKeyConfigDeviceWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELKeyConfigDeviceWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKeyConfigDeviceWidgetBase" },
		{ "ModuleRelativePath", "Public/ELKeyConfigDeviceWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType = { "m_DeviceType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELKeyConfigDeviceWidgetBase, m_DeviceType), Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType, METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::NewProp_m_DeviceType,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UKeyConfigDeviceWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(UELKeyConfigDeviceWidgetBase, IKeyConfigDeviceWidgetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELKeyConfigDeviceWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::ClassParams = {
		&UELKeyConfigDeviceWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELKeyConfigDeviceWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELKeyConfigDeviceWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELKeyConfigDeviceWidgetBase, 3435028991);
	template<> ABP_200508_API UClass* StaticClass<UELKeyConfigDeviceWidgetBase>()
	{
		return UELKeyConfigDeviceWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELKeyConfigDeviceWidgetBase(Z_Construct_UClass_UELKeyConfigDeviceWidgetBase, &UELKeyConfigDeviceWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELKeyConfigDeviceWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELKeyConfigDeviceWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
