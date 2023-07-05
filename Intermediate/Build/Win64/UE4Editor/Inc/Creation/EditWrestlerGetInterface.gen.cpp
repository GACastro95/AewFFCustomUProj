// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditWrestlerGetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditWrestlerGetInterface() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerGetInterface_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerGetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	EGender IEditWrestlerGetInterface::GetGender() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGender instead.");
		EditWrestlerGetInterface_eventGetGender_Parms Parms;
		return Parms.ReturnValue;
	}
	FGuid IEditWrestlerGetInterface::GetUID() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUID instead.");
		EditWrestlerGetInterface_eventGetUID_Parms Parms;
		return Parms.ReturnValue;
	}
	void UEditWrestlerGetInterface::StaticRegisterNativesUEditWrestlerGetInterface()
	{
	}
	struct Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerGetInterface_eventGetGender_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerGetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerGetInterface, nullptr, "GetGender", nullptr, nullptr, sizeof(EditWrestlerGetInterface_eventGetGender_Parms), Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditWrestlerGetInterface_eventGetUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EditWrestlerGetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditWrestlerGetInterface, nullptr, "GetUID", nullptr, nullptr, sizeof(EditWrestlerGetInterface_eventGetUID_Parms), Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditWrestlerGetInterface_NoRegister()
	{
		return UEditWrestlerGetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEditWrestlerGetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditWrestlerGetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditWrestlerGetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditWrestlerGetInterface_GetGender, "GetGender" }, // 1482240216
		{ &Z_Construct_UFunction_UEditWrestlerGetInterface_GetUID, "GetUID" }, // 2742335125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditWrestlerGetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditWrestlerGetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditWrestlerGetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEditWrestlerGetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditWrestlerGetInterface_Statics::ClassParams = {
		&UEditWrestlerGetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditWrestlerGetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditWrestlerGetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditWrestlerGetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditWrestlerGetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditWrestlerGetInterface, 395295232);
	template<> CREATION_API UClass* StaticClass<UEditWrestlerGetInterface>()
	{
		return UEditWrestlerGetInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditWrestlerGetInterface(Z_Construct_UClass_UEditWrestlerGetInterface, &UEditWrestlerGetInterface::StaticClass, TEXT("/Script/Creation"), TEXT("UEditWrestlerGetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditWrestlerGetInterface);
	static FName NAME_UEditWrestlerGetInterface_GetGender = FName(TEXT("GetGender"));
	EGender IEditWrestlerGetInterface::Execute_GetGender(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEditWrestlerGetInterface::StaticClass()));
		EditWrestlerGetInterface_eventGetGender_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEditWrestlerGetInterface_GetGender);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UEditWrestlerGetInterface_GetUID = FName(TEXT("GetUID"));
	FGuid IEditWrestlerGetInterface::Execute_GetUID(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEditWrestlerGetInterface::StaticClass()));
		EditWrestlerGetInterface_eventGetUID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEditWrestlerGetInterface_GetUID);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
