// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPoolActorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPoolActorInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolActorInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolActorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void IELSSPoolActorInterface::OnScoop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnScoop instead.");
	}
	void IELSSPoolActorInterface::OnSink()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSink instead.");
	}
	void UELSSPoolActorInterface::StaticRegisterNativesUELSSPoolActorInterface()
	{
	}
	struct Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPoolActorInterface, nullptr, "OnScoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPoolActorInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPoolActorInterface, nullptr, "OnSink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPoolActorInterface_OnSink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPoolActorInterface_OnSink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPoolActorInterface_NoRegister()
	{
		return UELSSPoolActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPoolActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPoolActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPoolActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPoolActorInterface_OnScoop, "OnScoop" }, // 1235488035
		{ &Z_Construct_UFunction_UELSSPoolActorInterface_OnSink, "OnSink" }, // 636585582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPoolActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPoolActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSPoolActorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPoolActorInterface_Statics::ClassParams = {
		&UELSSPoolActorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPoolActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPoolActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPoolActorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPoolActorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPoolActorInterface, 859074843);
	template<> ABP_200508_API UClass* StaticClass<UELSSPoolActorInterface>()
	{
		return UELSSPoolActorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPoolActorInterface(Z_Construct_UClass_UELSSPoolActorInterface, &UELSSPoolActorInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPoolActorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPoolActorInterface);
	static FName NAME_UELSSPoolActorInterface_OnScoop = FName(TEXT("OnScoop"));
	void IELSSPoolActorInterface::Execute_OnScoop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSPoolActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSPoolActorInterface_OnScoop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UELSSPoolActorInterface_OnSink = FName(TEXT("OnSink"));
	void IELSSPoolActorInterface::Execute_OnSink(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSPoolActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UELSSPoolActorInterface_OnSink);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
