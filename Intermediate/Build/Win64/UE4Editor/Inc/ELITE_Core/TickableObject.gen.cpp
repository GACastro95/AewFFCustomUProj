// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/TickableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTickableObject() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UTickableObject_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UTickableObject();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCommonObject();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static FName NAME_UTickableObject_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UTickableObject::ReceiveTick(float DeltaSeconds)
	{
		TickableObject_eventReceiveTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UTickableObject_ReceiveTick),&Parms);
	}
	void UTickableObject::StaticRegisterNativesUTickableObject()
	{
	}
	struct Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TickableObject_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TickableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTickableObject, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(TickableObject_eventReceiveTick_Parms), Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTickableObject_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTickableObject_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTickableObject_NoRegister()
	{
		return UTickableObject::StaticClass();
	}
	struct Z_Construct_UClass_UTickableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTickableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTickableObject_ReceiveTick, "ReceiveTick" }, // 418863726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TickableObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TickableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTickableObject_Statics::ClassParams = {
		&UTickableObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTickableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTickableObject, 2968027134);
	template<> ELITE_CORE_API UClass* StaticClass<UTickableObject>()
	{
		return UTickableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTickableObject(Z_Construct_UClass_UTickableObject, &UTickableObject::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UTickableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
