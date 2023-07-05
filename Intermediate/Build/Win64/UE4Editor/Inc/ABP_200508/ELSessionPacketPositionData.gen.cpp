// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSessionPacketPositionData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSessionPacketPositionData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketPositionData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSessionPacketPositionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSessionPacketPositionData::execGetPositionData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositionData();
		P_NATIVE_END;
	}
	void UELSessionPacketPositionData::StaticRegisterNativesUELSessionPacketPositionData()
	{
		UClass* Class = UELSessionPacketPositionData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPositionData", &UELSessionPacketPositionData::execGetPositionData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics
	{
		struct ELSessionPacketPositionData_eventGetPositionData_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSessionPacketPositionData_eventGetPositionData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSessionPacketPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSessionPacketPositionData, nullptr, "GetPositionData", nullptr, nullptr, sizeof(ELSessionPacketPositionData_eventGetPositionData_Parms), Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSessionPacketPositionData_NoRegister()
	{
		return UELSessionPacketPositionData::StaticClass();
	}
	struct Z_Construct_UClass_UELSessionPacketPositionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PositionData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PositionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSessionPacketPositionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSessionPacketPositionData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSessionPacketPositionData_GetPositionData, "GetPositionData" }, // 962272453
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketPositionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSessionPacketPositionData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSessionPacketPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData_Inner = { "PositionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSessionPacketPositionData" },
		{ "ModuleRelativePath", "Public/ELSessionPacketPositionData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData = { "PositionData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSessionPacketPositionData, PositionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSessionPacketPositionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSessionPacketPositionData_Statics::NewProp_PositionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSessionPacketPositionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSessionPacketPositionData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSessionPacketPositionData_Statics::ClassParams = {
		&UELSessionPacketPositionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSessionPacketPositionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPositionData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSessionPacketPositionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSessionPacketPositionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSessionPacketPositionData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSessionPacketPositionData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSessionPacketPositionData, 2447338693);
	template<> ABP_200508_API UClass* StaticClass<UELSessionPacketPositionData>()
	{
		return UELSessionPacketPositionData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSessionPacketPositionData(Z_Construct_UClass_UELSessionPacketPositionData, &UELSessionPacketPositionData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSessionPacketPositionData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSessionPacketPositionData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
